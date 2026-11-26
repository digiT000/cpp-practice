#include <iostream>

// C++ already handle the derefrence and take the address
// Because the use refrences, its need a variable that alrady declare and the address is exist before
void assignValue(int & value)
{
    // Because we set the param as refrence, we can directly re-assign the value without needing * (indicator)
    value = 15;
}

int main()
{

    int i = 10;
    assignValue(i);

    std::cout << i << std::endl;

}