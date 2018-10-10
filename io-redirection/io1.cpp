#include <iostream>
#include <string>
int main()
{
    for(int i = 0; i < 10; ++i) {
        std::string input;
//        std::getline(std::cin, input);
//        std::cin >> input;
        input = std::cin.get();
        std::cout << input << '\n';
    }
    std::cout << std::endl;
}
