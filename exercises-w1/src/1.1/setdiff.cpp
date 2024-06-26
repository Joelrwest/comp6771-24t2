#include "setdiff.h"

#include <vector>

/*
Example:
vec_set (before) [a b c d e e f g]
blacklist [e a z]
vec_set (after) [b c d f g]

Could also be written as:
void set_difference(std::vector<char>& vec_set, const std::vector<char>& blacklist)
*/
auto set_difference(std::vector<char>& vec_set, const std::vector<char>& blacklist) -> void
{
    for (const char item : blacklist)
    {
        // Remove it from vec_set
        std::erase(vec_set, item);
    }
}
