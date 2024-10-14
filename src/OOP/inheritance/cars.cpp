#include "cars.h"

Cars::Cars(){
    std::cout << "Cars contructor called.\n";
    trunk_size = "";
}

Cars::Cars(std::string mk, std::string col, int yr, std::string mdl, std::string ts)
    :Vehicle(mk, col, yr, mdl){
    std::cout << "Cars contructor called.\n";
    trunk_size = ts;
}

void Cars::car_details(){
    print_details();
    std::cout << "Trunk size: " << trunk_size << std::endl;
}