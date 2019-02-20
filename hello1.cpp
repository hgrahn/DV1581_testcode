#include <iostream>
using std::string;
int main()
{
    // input: Hello World!, output Hello
    std::cout << "Input 1: ";
    string s;          // empty string
    std::cin >> s;          // read a whitespace-separated string into s
    std::cout << s << std::endl; // write s to the output

    // input: Hello World!, output Hello World!
    std::cout << "Input 2: ";
    string s1, s2;
    std::cin >> s1 >> s2;  // read first input into s1, second into s2
    std::cout << s1 << s2 << std::endl; // write both strings
    return 0;
}
