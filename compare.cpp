#include <iostream>
#include <string>
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

    // instantiates int compare(const std::string&, const std::string&)
    std::cout << compare(std::string("Hej"), std::string("Hopp")) << std::endl;  // T is std::string
    std::cout << compare(std::string("hej"), std::string("Hej")) << std::endl;
    std::cout << compare(std::string("Hej"), std::string("Hej")) << std::endl;

    //std::cout << compare(std::string("hej"), 4) << std::endl;

    // instantiates int compare(const vector<int>&, const vector<int>&)
    std::vector<int> vec1{1, 2, 3}, vec2{4, 5, 6};
    std::cout << compare(vec1, vec2) << std::endl; // T is vector<int>
}
