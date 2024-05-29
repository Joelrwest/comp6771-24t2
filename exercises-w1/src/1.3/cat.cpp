/*
#include <stdio.h>

int main() {
  char buffer[100];
  fgets(buffer, 100, stdin);
  printf("%s", buffer);
  return 0;
}
*/

#include <iostream>

int main()
{
    std::string buffer {};

    std::getline(std::cin, buffer);
    std::cout << buffer << std::endl;

    return 0;
}
