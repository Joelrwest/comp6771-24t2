#include <map>
#include <iostream>

void print_map(const std::map<int, int>& map);

int main(void)
{
    std::map<int, int> map {};
    print_map(map);
    if (map.at(6771) == 0)
    {
        std::cout << "it's 0\n";
    }
    else
    {
        std::cout << "it's not 0\n";
    }
    print_map(map);

    return 0;
}

void print_map(const std::map<int, int>& map)
{
    std::cout << "I'm printing\n";
    for (const auto& [key, value] : map)
    {
        std::cout << '{' << key << ", " << value << "}\n";
    }
}
