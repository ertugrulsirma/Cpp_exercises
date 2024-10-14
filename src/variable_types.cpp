#include <iostream>
#include <limits>

void variable_types(){
    std::cout << sizeof(int) << std::endl;
    //the leftmost bit means it is positive or negative
    // max: 01111111 11111111 11111111 11111111 = 2^31 - 1
    // min: 10000000 00000000 00000000 00000000 = −2^31
    std::cout << std::numeric_limits<int>::max() << std::endl; 
    std::cout << std::numeric_limits<int>::min() << std::endl;
}