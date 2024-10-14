#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date {
    int day;
    int month;
    int year;

public:
    Date();
    Date(int d, int m, int y);

    void print_date();

    ~Date();
};

#endif
