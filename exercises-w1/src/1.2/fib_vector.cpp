#include "fib_vector.h"

auto fibonacci(int n) -> std::vector<int>
{
    if (n < 1)
    {
        return std::vector<int> {};
    }

    if (n == 1)
    {
        return std::vector<int> {1};
    }

    std::vector<int> fib {1, 1};
    for (auto count {0}; count < n - 2; ++count)
    {
        const auto last_idx {fib.size() - 1};
        const auto last {fib.at(last_idx)};
        const auto second_last {fib[last_idx - 1]};

        fib.push_back(last + second_last);
    }

    return fib;
}
