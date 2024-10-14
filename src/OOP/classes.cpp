#include "classes.h"

Date::Date(){
    day = 0;
    month = 0;
    year = 0;
}

Date::Date(int d, int m, int y){
    day = d;
    month = m;
    year = y;
}

void Date::print_date(){ 
    std::cout << "Date: " << day << "/" << month << "/" << year << std::endl;
}

Date::~Date(){
    std::cout << "Constructor of Date called." << std::endl;
}
