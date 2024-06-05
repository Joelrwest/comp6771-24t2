#include <vector>
#include <iostream>

/*
Question 2.3.3

What kind of error is displayed in the below code?

a) Link-time error: i is just a variable declaration and the real i hasn't been defined yet.
b) Logic error: i is uninitialised and so its use is illegal.
c) Logic error: v is not used after the for-loop.
d) Run-time error: pushing back continuously to a vector can result in an "out of memory" error
*/

int main()
{
    std::vector<int> v;
    int i;
    while (i > 0)
    {
        v.push_back(i);
        --i;
    }
}
