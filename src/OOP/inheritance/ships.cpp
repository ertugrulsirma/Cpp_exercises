#include "ships.h"

Ships::Ships(){
    std::cout << "Ships constructor called.\n";
    number_of_anchors = 0;
}
  
Ships::Ships(std::string mk, std::string col, int yr, std::string mdl, int na)
  :Vehicle(mk, col, yr, mdl){
    std::cout << "Ships constructor called.\n";
    number_of_anchors = na;
}

void Ships::ship_details(){
    print_details();
    std::cout << "Number of Anchors: " << number_of_anchors << std::endl;
}