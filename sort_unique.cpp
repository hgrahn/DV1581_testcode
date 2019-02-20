#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

std::vector<std::string> words{"the", "quick", "red", "fox", "jumps",
    "over", "the", "slow", "red", "turtle"};

void print_words()
{
    for (auto b = words.cbegin(); b != words.cend(); ++b)
        std::cout << *b << " ";
    std::cout << std::endl << std::endl;
}

int main()
{

    std::cout << "The individual words are: ";
    print_words();

    // sort the words
    std::sort(words.begin(), words.end());
    std::cout << "The sorted words are: ";
    print_words();

    // remove duplicates
    auto end_unique = std::unique(words.begin(), words.end());
    std::cout << "end_unique: " << *end_unique << " " << *(words.end()-1) << " " << *(end_unique-1) << std::endl;
    std::cout << "The sorted unique words are: ";
    std::cout << words.size() << std::endl;
    print_words();

    words.erase(end_unique, words.end());
    std::cout << "The sorted unique words are: ";
    print_words();
    std::cout << words.size() << std::endl;
    
}
