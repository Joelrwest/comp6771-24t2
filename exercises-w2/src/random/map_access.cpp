#include <map>
#include <iostream>

void print_map(const std::map<int, int>& map);

int main(void)
{
    std::map<int, int> map {};

    return 0;
}

void print_map(const std::map<int, int>& map)
{
    for (const auto& [key, value] : map)
    {
        std::cout << '{' << key << ", " << value << "}\n";
    }
}
