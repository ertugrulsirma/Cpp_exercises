#include "vehicle.h"

Vehicle::Vehicle(){
    std::cout << "Vehicle constructor called.\n";
    make = "";
    color = "";
    year = 0;
    model = "";
}
  
Vehicle::Vehicle(std::string mk, std::string col, int yr, std::string mdl){
    std::cout << "Vehicle constructor called.\n";
    make = mk;
    color = col;
    year = yr;
    model = mdl;
}

void Vehicle::print_details(){
    std::cout << "Manufacturer: " << make << std::endl;
    std::cout << "color: " << color << std::endl;
    std::cout << "year: " << year << std::endl;
    std::cout << "model: " << model << std::endl;
}