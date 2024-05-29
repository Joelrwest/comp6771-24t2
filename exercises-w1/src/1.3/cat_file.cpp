#include <iostream>
#include <fstream>

int main()
{
    std::string buffer {};

    std::ifstream file {"my_file.txt"};

    std::getline(file, buffer);
    // or std::cout << buffer << '\n';
    std::cout << buffer << std::endl;

    return 0;
}
