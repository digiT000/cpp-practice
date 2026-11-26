#include <iostream>


void assignValue(int value)
{
    value = 10;
}

int main()
{
    // Pass by Value
    int i = 10;
    
    // AssignValue got the copies of i; 
    assignValue(i);

    // When assignValue try change the value, it change the copies but the actual i is still 10

    std::cout << i << std::endl; // result = 10
}