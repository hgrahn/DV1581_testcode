#include <iostream>
#include <random>
#include <vector>
#include <string>

int main()
{
    std::default_random_engine e; // generates random integers
    std::normal_distribution<> n(4,1.5); // mean 4, standard deviation 1.5
    std::vector<unsigned> vals(9); // nine elements each 0

    for (size_t i = 0; i != 300; ++i) {
        unsigned v = lround(n(e)); // round to the nearest integer
        if (v < vals.size()) // if this result is in range
            ++vals[v]; // count how often each number appears
    }
    for (size_t j = 0; j != vals.size(); ++j)
        std::cout << j << ": " << std::string(vals[j], '*') << std::endl;
}
