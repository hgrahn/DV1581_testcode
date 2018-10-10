#include <iostream>
int main()
{
    std::cout << "Calculating Factorial for 1 thru 9\n";
    for(int n = 1; n <= 9; ++n) {
        int result = 1;
        int nValue = n;
        while(nValue != 0)
        result *= nValue--;
        std::cout << "\tFactorial for " << n << ": " << result << '\n';
    }
}