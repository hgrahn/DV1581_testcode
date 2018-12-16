#include <iostream>
#include <random>
#include <vector>

// almost surely the wrong way to generate a vector of random integers
// output from this function will be the same 20 numbers on every call!
std::vector<unsigned> bad_randVec()
{
    std::default_random_engine e;
    std::uniform_int_distribution<unsigned> u(0,9);
    std::vector<unsigned> ret;
    for (size_t i = 0; i < 20; ++i)
        ret.push_back(u(e));
    return ret;
}

// returns a vector of 20 uniformly distributed random numbers
std::vector<unsigned> good_randVec()
{
    // because engines and distributions retain state, they usually should be
    // defined as static so that new numbers are generated on each call
    static std::default_random_engine e;
    static std::uniform_int_distribution<unsigned> u(0,9);
    std::vector<unsigned> ret;
    for (size_t i = 0; i < 20; ++i)
        ret.push_back(u(e));
    return ret;
}

void print_vec(std::vector<unsigned>& v)
{
    std::cout << "{";
    for (size_t i = 0; i < v.size()-1; ++i)
        std::cout << v[i] << ", ";
    std::cout << v[v.size()-1] << "}";
}

int main()
{
    std::vector<unsigned> v1(bad_randVec());
    std::vector<unsigned> v2(bad_randVec());

    std::cout << "v1 = "; print_vec(v1); std::cout << std::endl;
    std::cout << "v2 = "; print_vec(v2); std::cout << std::endl;
    // will print equal
    std::cout << ((v1 == v2) ? "equal" : "not equal") << std::endl << std::endl;

    std::vector<unsigned> v3(good_randVec());
    std::vector<unsigned> v4(good_randVec());

    std::cout << "v3 = "; print_vec(v3); std::cout << std::endl;
    std::cout << "v4 = "; print_vec(v4); std::cout << std::endl;
    // will print equal
    std::cout << ((v3 == v4) ? "equal" : "not equal") << std::endl;
}
