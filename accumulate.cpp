#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <string>

int main()
{
    std::vector<int> ivec{1,2,3,4,5,6,7,8,9};

    // sum the elements in ivec starting the summation with the value 0
    int sum = std::accumulate(ivec.cbegin(), ivec.cend(), 0);

    std::cout << "Sum of ivec = " << sum << std::endl;

    std::vector<std::string> words{"the", "quick", "red", "fox", "jumps",
        "over", "the", "slow", "red", "turtle"};
    std::string line = std::accumulate(words.cbegin(), words.cend(), std::string(""));

    std::cout << "The individual words are: ";
    for (auto b = words.cbegin(); b != words.cend(); b++)
        std::cout << *b << " ";
    std::cout << std::endl;

    std::cout << "Together they look like: " << line << std::endl;
}
