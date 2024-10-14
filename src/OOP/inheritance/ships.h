#ifndef SHIPS_H
#define SHIPS_H

#include <iostream>
#include "vehicle.h"

class Ships: public Vehicle{
  int number_of_anchors;

  public:
  Ships();
  Ships(std::string mk, std::string col, int yr, std::string mdl, int na);

  void ship_details();
};

#endif