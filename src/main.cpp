#include <iostream>

#include "number_systems.h"
#include "variable_types.h"
#include "OOP/classes.h"
#include "OOP/abstraction/circle.h"
#include "OOP/inheritance/cars.h"
#include "OOP/inheritance/ships.h"
#include "OOP/inheritance/vehicle.h"

int main(){
    std::cout << "Build with cmake.\n";
    // number_systems();
    // variable_types();

    // Date date1;
    // date1.print_date();

    // Date date2{12,11,1999};
    // date2.print_date();

    // Circle circle1(5);
    // std::cout << "Area: " << circle1.area() << std::endl;
    // std::cout << "Perimeter: " << circle1.perimeter() << std::endl;

    Cars car("Chevrolet", "Black", 2010, "Camaro", "9.1 cubic feet");
    car.car_details();
    
    Ships ship("Harland and Wolff, Belfast", "Black and whilte",
                1912, "RMS Titanic", 3);
    ship.ship_details();

    return 0;
}