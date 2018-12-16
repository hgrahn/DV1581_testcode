#include <iostream>
#include <vector>

template <typename T>
int compare(const T &v1, const T &v2)
{
    if (v1 < v2) return -1;
    if (v2 < v1) return 1;
    return 0;
}

int main()
{
    // instantiates int compare(const int&, const int&)
    std::cout << compare(1, 0) << std::endl;       // T is int

    // instantiates int compare(const vector<int>&, const vector<int>&)
    std::vector<int> vec1{1, 2, 3}, vec2{4, 5, 6};
    std::cout << compare(vec1, vec2) << std::endl; // T is vector<int>
}