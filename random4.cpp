#include <iostream>
#include <random>
#include <vector>
#include <string>

int main()
{
    const unsigned int nvals = 1000;
    const unsigned mean = 20;
    const double stddev = mean/5.0;

    std::default_random_engine e; // generates random integers
    std::normal_distribution<> n(mean, stddev);
    std::vector<unsigned> vals(mean*2);

    for (size_t i = 0; i != nvals; ++i) {
        unsigned v = lround(n(e)); // round to the nearest integer
        if (v < vals.size()) // if this result is in range
            ++vals[v]; // count how often each number appears
    }
    for (size_t j = 0; j != vals.size(); ++j)
        std::cout << j << ": " << std::string(vals[j], '*') << std::endl;
}
