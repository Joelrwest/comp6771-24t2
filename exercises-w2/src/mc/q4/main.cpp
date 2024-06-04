/*
Question 2.3.1

What kind of error is first displayed in the below code?

a) Compile-time error: lib2.cpp did not include api.h
b) Compile-time error: multiple definitions of some_function().
c) Link-time error: multiple definitions of some_function().
d) Logic Error: 6771 is not a random number!
*/

#include "lib1.hpp"

#include <iostream>

int main(void)
{
    int i = some_function();
    std::cout << "i = " << i << '\n';

    return 0;
}
