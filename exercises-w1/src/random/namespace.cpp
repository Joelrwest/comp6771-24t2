#include <iostream>

/*
In some other file...
*/

/*
joels_library_print()
*/
namespace joels_library
{
void print()
{
    std::cout << "Joel's print!\n";
}
}

/*
In some other file...
*/
namespace haydens_library
{
void print()
{
    std::cout << "Hayden's print!\n";
}
}

///////////////////////////////////////////////////

/*
In my own file
*/
void print()
{
    std::cout << "My print!\n";
}

int main(void)
{
    joels_library::print();
    haydens_library::print();
    print();

    return 0;
}
