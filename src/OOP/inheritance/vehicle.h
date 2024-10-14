#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

class Vehicle{
  protected:
  std::string make;
  int year;
  std::string color;
  std::string model;

  public:
  Vehicle();
  Vehicle(std::string mk, std::string col, int yr, std::string mdl);
  
  void print_details();
};

#endif