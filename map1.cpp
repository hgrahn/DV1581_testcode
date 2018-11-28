#include <iostream>
#include <vector>
#include <string>
#include <map>

int main()
{
    std::vector<std::string> words{"the", "quick", "red", "fox", "jumps",
        "over", "the", "slow", "red", "turtle"};
    std::map<std::string, size_t> word_count; // empty map from string to size_t

    // count the number of times each word occurs in the input
    for (auto w = words.cbegin(); w != words.cend(); w++)
        ++word_count[*w]; // fetch and increment the counter for word

    for (const auto &w : word_count) // for each element in the map
        // print the results
        std::cout << w.first << " occurs " << w.second
            << ((w.second > 1) ? " times" : " time") << std::endl;
}
