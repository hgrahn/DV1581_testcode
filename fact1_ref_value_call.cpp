#include <iostream>

int fact(int &val) // called by value
{
    int ret = 1; // local variable to hold the result as we calculate it
    while (val > 1)
        ret *= val--; // decrements val
    return ret; // return the result
}

int main()
{
    int i = 5, factorial = 0;
    factorial = fact(i);
    std::cout << i << ", " << factorial << std::endl;
}
