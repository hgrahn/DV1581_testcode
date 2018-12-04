#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
int a = 5;
int b;

int main()
{
    // example of iterating over set
    std::set<int> iset = {0,1,2,3,4,5,6,7,8,9};
    std::set<int>::iterator set_it = iset.begin();

    while (set_it != iset.end()) {
        std::cout << *set_it << " "; // ok: can read the key but not write
        ++set_it;
    }
    std::cout << std::endl << std::endl;

    // example of iterating over a map
    std::vector<std::string> words{"the", "quick", "red", "fox", "jumps",
        "over", "the", "slow", "red", "turtle"};
    std::map<std::string, size_t> word_count; // empty map from string to size_t

    // count the number of times each word occurs in the input
    for (auto w = words.cbegin(); w != words.cend(); ++w)
        ++word_count[*w]; // fetch and increment the counter for word

    // get an iterator positioned on the first element
    auto map_it = word_count.cbegin();
    // compare the current iterator to the off-the-end iterator
    while (map_it != word_count.cend()) {
        // dereference the iterator to print the element key--value pairs
        std::cout << map_it->first << " occurs "
            << map_it->second << " times" << std::endl;
            ++map_it; // increment the iterator to denote the next element
    }
    std::cout << std::endl;

    //return 0;

    // example to remove a key - test with different words
    std::string removal_word("their");
    // erase on a key returns the number of elements removed
    if (int n = word_count.erase(removal_word))
    {
        std::cout << "ok: " << removal_word << " removed\n";
        std::cout << n << " words removed" << std::endl;
    }
    else
        std::cout << "oops: " << removal_word << " not found!\n\n";
}
