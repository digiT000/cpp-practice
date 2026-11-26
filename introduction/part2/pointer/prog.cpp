#include <iostream>

int main(int argc, char * argv[])
{
    int i = 5;

    // 1. Creating Pointer, It isn't pointing anywhere yet.
    int * p;

    // 2. We defined address p to i address, now p pointing to i
    p = &i; 
    std::cout << p << std::endl; // it will result the hex address to i

    // 3. reassign value i from p (dereference)
    std::cout << "Prev Value : "<< i << std::endl; // 5
    *p = 15;
    std::cout << "After Value : "<< i << std::endl; // 15


}
