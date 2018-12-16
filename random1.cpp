#include <iostream>
#include <random>

int main()
{
    std::default_random_engine e; // generates random unsigned integers
    for (size_t i = 0; i < 10; ++i)
        // e() "calls" the object to produce the next random number
        std::cout << e() << " ";
    std::cout << std::endl;
}
