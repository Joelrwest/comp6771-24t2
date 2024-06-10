#include "permutation.h"

#include <unordered_map>

// std::unordered_map<char, int> count_letters(const std::string& word)
// {
//     std::unordered_map<char, int> map {};
//     // for (const char letter : word)
//     // for (char letter : word)
//     // for (char& letter : word)
//     for (const auto letter : word)
//     {
//         if (map.contains(letter))
//         {
//             // Inc
//             map.at(letter)++;
            
//             // EVIL
//             // map[letter]++;
//         }
//         else
//         {
//             // Set to 1
//             map.emplace(letter, 1);
//             // map.insert({letter, 1});

//             // EVIL
//             // map[letter] = 1;
//         }
//     }

//     return map;
// }

std::unordered_map<char, int> count_letters(const std::string& word)
{
    std::unordered_map<char, int> map {};
    for (const auto letter : word)
    {
        const auto it {map.find(letter)};
        if (it == map.end())
        {
            // Didn't find it
            map.emplace(letter, 1);
        }
        else
        {
            // We found it
            it->second++;
        }
    }

    return map;
}

auto is_permutation(const std::string& x, const std::string& y) -> bool
{
    const auto x_count {count_letters(x)};
    const auto y_count {count_letters(y)};

    return x_count == y_count;
}
