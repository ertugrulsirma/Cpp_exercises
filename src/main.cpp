#include <iostream>

#include "number_systems.h"
#include "variable_types.h"
#include "OOP/classes.h"
#include "OOP/abstraction/circle.h"
#include "OOP/inheritance/cars.h"
#include "OOP/inheritance/ships.h"
#include "OOP/inheritance/vehicle.h"
#include "OOP/polymorphism/polymorphism.h"
#include "OOP/polymorphism/pure_virtual_function.cpp"

int main(){
    std::cout << "Build with cmake.\n";
    // number_systems();
    // variable_types();

    /*Date date1;
    date1.print_date();

    Date date2{12,11,1999};
    date2.print_date();*/

    /*Circle circle1(5);
    std::cout << "Area: " << circle1.area() << std::endl;
    std::cout << "Perimeter: " << circle1.perimeter() << std::endl;*/

    /*Cars car("Chevrolet", "Black", 2010, "Camaro", "9.1 cubic feet");
    car.car_details();
    
    Ships ship("Harland and Wolff, Belfast", "Black and whilte",
                1912, "RMS Titanic", 3);
    ship.ship_details();*/

    Rectangle2 r2(2, 6);
    Shape2* shape2 = &r2;

    std::cout << "Calling Rectangle getArea function: " << r2.get_area() << std::endl;
    std::cout << "Calling Rectangle from shape pointer: " <<  shape2->get_area() << std::endl <<std::endl;
    
    Circle2 c2(5);    // Creating Circle object
    shape2 = &c2;   // Referencing Shape class to Circle object
    
    std::cout << "Calling Circle getArea function: " << c2.get_area() << std::endl;
    std::cout << "Calling Circle from shape pointer: " <<shape2->get_area() << std::endl << std::endl;


    Shape4 * shape4[3]; 
    //Shape4 * shape1 = new Shape4(); 
    // when you attempt to create objects of a Shape class, 
    // the compiler will complain that you’re trying to instantiate an object of an abstract class. 
    // It will also tell you the name of the pure virtual function that makes it an abstract class.
    // Notice that, although this is only a declaration, you never need to write a definition of the Shape class getArea(). 
    // Initialize the Shape class pointer and point it to objects of derived classes to access the getArea() function of respective classes.

    Rectangle4 r4(2, 6);
    shape4[0] = &r4;
    
    Circle4 c4(5);
    shape4[1] = &c4;

    Square4 s4(10);
    shape4[2] = &s4;

    for(int i=0; i<3; i++)
        std::cout << shape4[i]->getArea() << std::endl;

    return 0;
}