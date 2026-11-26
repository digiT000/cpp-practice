#include <iostream>


int main(int argc, char * argv[])
{
    int i = 5;

    int * p;
    p = &i;

    std::cout << "i: " << i << std::endl;

    *p = 7;
    std::cout << "i: " << i << std::endl;
    std::cout << "p: " << p << std::endl;



}