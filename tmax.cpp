#include <string>
#include <iostream>

template <typename T>
T tMax(const T &a, const T &b)
{
    if(a < b)
        return b;
    return a;
}

char tMax(const char &a, const char &b)
{
    if(b < a)
        return b;
    return a;
}

int main()
{
    std::cout << tMax(std::string("A "), std::string("B ")) << '\n';
    std::cout << tMax('A', 'a') << '\n';
    std::cout << tMax(9.5f, 10.5f) << '\n';
    std::cout << tMax(100, 200) << '\n';
}
