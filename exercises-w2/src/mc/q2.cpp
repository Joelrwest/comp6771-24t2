/*
Question 2.3.4

What kind of error is displayed in the below code?

a) Logic-error: you are only allowed to return numbers in the range [-128, 128] from main().
b) Runtime-error: new can fail allocation and throws an exception if that happens
c) Compile-time error: int{42} is invalid syntax.
d) Logic-error: programmer did not check if ptr was nullptr or not before dereferencing.
*/

int main()
{
    int *ptr = new int {42};

    *ptr = 6771;

    return *ptr;
}
