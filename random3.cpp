#include <iostream>
#include <random>

int main()
{
    std::default_random_engine e1; // uses the default seed
    std::default_random_engine e2(2147483646); // use the given seed value

    // e3 and e4 generate the same sequence because they use the same seed
    std::default_random_engine e3; // uses the default seed value
    e3.seed(32767); // call seed to set a new seed value
    std::default_random_engine e4(32767); // set the seed value to 32767

    std::cout << "e1: ";
    for (size_t i = 0; i < 10; ++i) std::cout << e1() << " ";
    std::cout << std::endl;

    std::cout << "e2: ";
    for (size_t i = 0; i < 10; ++i) std::cout << e2() << " ";
    std::cout << std::endl;

    std::cout << "e3: ";
    for (size_t i = 0; i < 10; ++i) std::cout << e3() << " ";
    std::cout << std::endl;

    std::cout << "e4: ";
    for (size_t i = 0; i < 20; ++i) std::cout << e4() << " ";
    std::cout << std::endl;

    e3.seed(345345);
    std::cout << "e3: ";
    for (size_t i = 0; i < 10; ++i) std::cout << e3() << " ";
    std::cout << std::endl;

}
