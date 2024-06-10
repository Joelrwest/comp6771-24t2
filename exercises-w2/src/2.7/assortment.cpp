#include "assortment.h"

auto sort(std::vector<int>& ivec) -> void
{
    std::sort(ivec.begin(), ivec.end());
}

auto sort(std::array<int, 4>& iarr) -> void
{
    std::sort(iarr.begin(), iarr.end());
}

auto sort(std::list<int>& ilist) -> void
{
    // ilist.sort();
    std::vector<int> copy {ilist.begin(), ilist.end()};
    sort(copy);
    std::copy(copy.begin(), copy.end(), ilist.begin());
}