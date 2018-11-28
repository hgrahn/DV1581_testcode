#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

int main()
{
    std::vector<int> ivec{1,2,3,4,5,1,2,3,4,5};

    std::cout << "Initial vector: {";
    for (auto it = ivec.cbegin(); it != ivec.cend(); it++)
        std::cout << *it << " ";
    std::cout << "}" << std::endl;

    // replace any element with the value 2 with 42
    replace(ivec.begin(), ivec.end(), 2, 42);

    std::cout << "Final vector: {";
    for (auto it = ivec.cbegin(); it != ivec.cend(); it++)
        std::cout << *it << " ";
    std::cout << "}" << std::endl;
}
