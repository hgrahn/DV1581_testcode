#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> words{"the", "quick", "red", "fox", "jumps",
        "over", "the", "slow", "red", "turtle"};

    std::cout << "The individual words are: ";
    for (auto b = words.cbegin(); b != words.cend(); b++)
        std::cout << *b << " ";
    std::cout << std::endl << std::endl;

    // sort the words
    std::sort(words.begin(), words.end());
    std::cout << "The sorted words are: ";
    for (auto b = words.cbegin(); b != words.cend(); b++)
        std::cout << *b << " ";
    std::cout << std::endl << std::endl;

    // remove duplicates
    auto end_unique = std::unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
    std::cout << "The sorted unique words are: ";
    for (auto b = words.cbegin(); b != words.cend(); b++)
        std::cout << *b << " ";
    std::cout << std::endl;
}
