#include <iostream>
#include <vector>

void convert_decimal_to_binary(int decimal)
{
    int tmp = decimal; //Only to store the decimal (to be used again in the 2nd solution). No need to tmp for convert.

    // Solution with vector.
    std::vector<int> res;

    while(decimal != 0)
    {
        res.push_back(decimal%2);
        decimal /= 2;
    }

    std::cout << "Solution 1 result : ";
    for(int i = res.size() -1 ; i >= 0; i--)
    {
        std::cout << res[i];
    }
    std::cout << std::endl;

    // Solution without vector.
    decimal = tmp;
    int binary = 0;
    int index = 1;
    
    while(decimal != 0)
    {
        binary += (decimal%2) * index;
        decimal /= 2;
        index *= 10;
    }
    std::cout << "Solution 2 result : " << binary << std::endl;
}