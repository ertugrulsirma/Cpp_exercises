#include "number_systems.h"

void number_systems(){
    int number{19}; //decimal
    std::cout << number << std::endl;
    number = 023; //octal
    std::cout << number << std::endl;
    number = 0x13; //hexadecimal
    std::cout << number << std::endl;
    number = 0b00010011; //binary 
    std::cout << number << std::endl;
    
    int number_2{197};
    std::cout << number_2 << std::endl;
    number_2 = 0305; // 3*8^2 + 0*8^1 + 5*8^1;
    std::cout << number_2 << std::endl;
    number_2 = 0xC5;  //  12*16^1 + 5*16^0;
    std::cout << number_2 << std::endl;
    number_2 = 0b11000101; // 1*2^7 + 1*2^6 + 1*2^2 + 1*2^0;
    std::cout << number_2 << std::endl;
}