#include <Arduino.h>
#include <math.h>
#include <Servo.h>
#include "sensors.h"
#include "navigation.h"

void printData(){
  Serial1.print("Latitude: "); Serial1.println(sensorData.lati);
  Serial1.print("Longitude: "); Serial1.println(sensorData.longi);
  Serial1.print("Wind w.r.t North: "); Serial1.println(sensorData.windDir);
  Serial1.print("Boat direction: "); Serial1.println(sensorData.boatDir);
}

void printWaypointData(){
  Serial1.println("----------NAVIGATION----------");
  Serial1.print("Next Waypoint #");
  Serial1.print(wpNum);
  Serial1.print(": ");
  Serial1.print(wayPoints[wpNum].latitude);
  Serial1.print(", ");
  Serial1.println(wayPoints[wpNum].longitude);
}

void printHitWaypointData(){
  Serial1.println("");
  Serial1.println("");
  Serial1.println("");
  Serial1.println("----------");
  Serial1.println("REACHED WAYPOINT!");
  Serial1.println("----------");
  Serial1.println("");
  Serial1.println("");
  Serial1.println("");
}

void printSailTailSet(){
  Serial1.print("Sail angle: ");   Serial1.println(sailAngle);
  Serial1.print("Tail angle: ");   Serial1.println(tailAngle);
}
