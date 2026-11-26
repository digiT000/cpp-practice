#include <iostream>

// Pass by pointer:
// The parameter is a pointer, so it receives the ADDRESS of the caller's variable.
// The pointer itself is still passed by value (value is a copy of the address),
// so changing `value` (e.g. value = nullptr) does NOT affect the caller.
//
// Risks of pass by pointer:
// 1. Null pointer: dereferencing nullptr is undefined behavior, usually a crash (segfault).
// 2. Invalid / dangling pointer: if the address points to memory we don't own, it may crash,
//    OR silently overwrite other data (worse: the bug shows up later, somewhere else).
// 3. Wrong type: passing a float* to an int* parameter is a COMPILE ERROR, not a crash.
//    The compiler checks pointer types (only a forced cast can bypass this).
void assignValue(int* value)
{
    // Dereference the pointer (*value) to reach the caller's int, and write 15 there.
    *value = 15;
}

int main()
{
    // Pass by Pointer

    int i = 10;

    // Pass the address of i (&i), not its value (10).
    // (The address is just a number; cout only DISPLAYS it in hex.)
    assignValue(&i);
    std::cout << "Value : " << i << std::endl; // 15, the function changed the original i
}
