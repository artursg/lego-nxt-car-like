#!/usr/bin/env python

import roslib; roslib.load_manifest('nxt_carlike')  
import rospy
import math
import thread
from std_msgs.msg import String
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Point32
from sensor_msgs.msg import JointState
from math import *


class Converter:
  def __init__(self):
        self.sub = rospy.Subscriber('steering_motor', JointState, self.steering_cb)
        self.sub = rospy.Subscriber('power_motor', JointState, self.power_cb)
        self.pub = rospy.Publisher('odom', Odometry)
        self.lastEncoderBackWheel = 0
        self.steeringAngle =0
        self.ratioGearSteering = 0.2
        self.ratioGearBackWheel = -1.652
        self.radiusWheel = 0.021
        self.wheelBaseLenght = 0.23
        self.wheelBaseWidht = 0.12
        self.Angle = 0
        self.X = 0
        self.Y = 0

  def steering_cb(self, msg):
	self.steeringAngle = radians(msg.position[0]*self.ratioGearSteering)
	#rospy.loginfo('msg.position[0]='+str(msg.position[0])+'steeringAngle='+str(self.steeringAngle))
	
  def power_cb(self, msg):
	encoderBackWheel = msg.position[0]
	deltaEncoderBackWheel = encoderBackWheel - self.lastEncoderBackWheel
	self.lastEncoderBackWheel = encoderBackWheel;
	deltaTravel = self.radiusWheel*radians(deltaEncoderBackWheel)*self.ratioGearBackWheel
	beta = tan(self.steeringAngle)*deltaTravel/self.wheelBaseLenght;
	#rospy.loginfo('Beta='+str(beta)+' deltaTravel='+str(deltaTravel)+' steeringAngle='+str(self.steeringAngle))
	if beta<0.0001:
	    self.X = self.X + deltaTravel*cos(self.Angle)
	    self.Y = self.Y + deltaTravel*sin(self.Angle)
	    self.Angle = (self.Angle + beta)
	else:
	    r = deltaTravel/beta
	    #rospy.loginfo('Radius curve='+str(r))
	    cx = self.X - sin(self.Angle)*r
	    cy = self.Y + cos(self.Angle)*r
	    self.Angle = (self.Angle + beta)
	    self.X = cx + r*sin(self.Angle)
	    self.Y = cy - r*cos(self.Angle)
	rospy.loginfo(' Angle='+str(self.Angle)+' X='+str(self.X)+' Y='+str(self.Y))    
	self.publish_odom()
  
  def publish_odom(self):
	  odom = Odometry()
	  odom.header.stamp = rospy.Time.now()
	  odom.pose.pose.position.x = self.X;
	  odom.pose.pose.position.y = self.Y;
	  odom.pose.pose.position.z = 0.0;
	  odom.pose.pose.orientation.x = 0.0;
	  odom.pose.pose.orientation.y = 0.0;
	  odom.pose.pose.orientation.z = self.Angle;
	  odom.pose.pose.orientation.w = 1.0;
	  odom.pose.covariance = [0.001, 0, 0, 0, 0, 0,
				  0, 0.001, 0, 0, 0, 0, 
				  0, 0, 0.001, 0, 0, 0,
				  0, 0, 0, 0.001, 0, 0,
				  0, 0, 0, 0, 0.001, 0,
				  0, 0, 0, 0, 0, 0.001] 
	  self.pub.publish(odom)

def main():
    rospy.init_node('encoder_to_odom')
    rospy.loginfo('Init odometry')
    converter = Converter()
    rospy.spin()


if __name__ == '__main__':
    main()
