#ifndef CARS_H
#define CARS_H

#include <iostream>
#include "vehicle.h"

class Cars: private Vehicle{
  std::string trunk_size;

  public:
  Cars();
  Cars(std::string mk, std::string col, int yr, std::string mdl, std::string ts);

  void car_details();
};

#endif
