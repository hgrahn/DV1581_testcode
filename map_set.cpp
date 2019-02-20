#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>

int main()
{
    std::vector<std::string> words{"the", "quick", "red", "fox", "jumps",
        "over", "the", "slow", "red", "turtle"};
    std::map<std::string, size_t> word_count; // empty map from string to size_t

    std::set<std::string> exclude = {"The", "But", "And", "Or", "An", "A",
                           "the", "but", "and", "or", "an", "a"};

    // count the number of times each word occurs in the input
    for (auto w = words.cbegin(); w != words.cend(); w++)
        // fetch and increment the counter for word
        ++word_count[*w];

    for (const auto &w : word_count) // for each element in the map
        // print the results
        std::cout << w.first << " occurs " << w.second
                << ((w.second > 1) ? " times" : " time") << std::endl;

    std::cout << std::endl;
    word_count.clear();

    // count the number of times each word occurs in the input,
    // excluding some words
    for (auto w = words.cbegin(); w != words.cend(); w++)
        if (exclude.find(*w) == exclude.end())
            // fetch and increment the counter for word
            ++word_count[*w];

    for (const auto &w : word_count) // for each element in the map
        // print the results
        std::cout << w.first << " occurs " << w.second
                << ((w.second > 1) ? " times" : " time") << std::endl;
}
