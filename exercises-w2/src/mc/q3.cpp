#include <iostream>

/*
Question 2.2.3

Which overload of do_something would be selected and why?

a) Overload 1: both overloads are equally viable but the
    return type of overload 1 matches ptr's type better
b) Overload 2: has exactly two arguments and a non-bottom-level const
    pointer is always convertible to a bottom-level const pointer.
c) Overload 1: the first two arguments match perfectly and the default
    argument is used for the third.
d) Overload 2: the top-level const src argument has higher priority
    than the corresponding bottom-level const src in overload 1.
*/

// Overload 1
auto do_something(char *dst, const char *src, int some_other_arg = 0) -> void
{
    (void)dst; (void)src; (void)some_other_arg;

    std::cout << "Calling overload 1!\n";
}

// Overload 3
auto do_something(char *dst, char *src, int some_other_arg = 0) -> void
{
    (void)dst; (void)src; (void)some_other_arg;

    std::cout << "Calling overload 1!\n";
}

// Overload 2
auto do_something(const char *dst, char * const src) -> void
{
    // const char * --> a pointer to a char I can't change
    // char* const --> a pointer that I can't change to a char
    (void)dst; (void)src;

    std::cout << "Calling overload 2!\n";
}

int main(void)
{
    // In C++ new == malloc
    // char *dst = malloc(sizeof(chat));
    // *dst = 'a';

    char *dst = new char {'a'};
    const char *src = new char {'b'};

    do_something(dst, src);

    return 0;
}
