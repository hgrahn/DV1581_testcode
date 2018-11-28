#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <string>

int main()
{
    std::vector<int> vec{1,2,3,5,6,7,8,9,0};
    int val = 42; // value we'll look for

    // result will denote the element we want if it's in vec, or vec.cend() if not
    auto result = std::find(vec.cbegin(), vec.cend(), val); // report the result
    std::cout << "The value " << val
        << (result == vec.cend() ? " is not present" : " is present")
        << std::endl;
    val = 7;
    result = std::find(vec.cbegin(), vec.cend(), val);
    std::cout << "The value " << val
        << (result == vec.cend() ? " is not present" : " is present")
        << std::endl;

    std::list<std::string> lst{"apple", "banana", "orange"};
    std::string sval = "plum";
    auto result2 = std::find(lst.cbegin(), lst.cend(), sval);
    std::cout << "The value " << sval
        << (result2 == lst.cend() ? " is not present" : " is present")
        << std::endl;

    sval = "orange";
    result2 = std::find(lst.cbegin(), lst.cend(), sval);
    std::cout << "The value " << sval
        << (result2 == lst.cend() ? " is not present" : " is present")
        << std::endl;
}
