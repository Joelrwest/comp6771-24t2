#include <iostream>

/*
Question 2.2.2

Which overload of put would be selected and why?

a) Overload 1: put was called with a char.
b) Overload 2: put was called with a mutable char and and references have higher priority.
c) Overload 3: put was called with a const char and const references have higher priority.
d) No overload: this call is ambiguous.
*/

// Overload 1
auto put(char) -> void
{
    std::cout << "Calling overload 1!\n";
}

// Overload 2
auto put(char &) -> void
{
    std::cout << "Calling overload 2!\n";
}

// Overload 3
auto put(const char &) -> void
{
    std::cout << "Calling overload 3!\n";
}

int main(void)
{
    // This doesn't work
    /*
    char c1 = 'a';
    do_something(c1);
    */

    // This also doesn't work,
    // but does const change anything?
    /*
    const char c2 = 'a';
    do_something(c2);
    */

    return 0;
}
