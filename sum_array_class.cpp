#include <iostream>
#include <string>

// Example of non-type parameter for a function template

template <typename T, int numberOfElements>
class SumArray {
public:
    T sum(T arr[])
    {
        T sum = T(); //Create a "default" object of T, if able.
        for(int i = 0; i < numberOfElements; ++i)
            sum += arr[i];
        return sum;
    }
};

int main()
{
    const int sizeOfArr = 10;
    float arr1[sizeOfArr] = {0.5, 0.25, -0.75, 0.2, 0.3, 0.4, 10.0, 0.33333, 0.9, -0.75};
    int arr2[sizeOfArr] = {10, -5, -7, -5, -10, 20, 30, 45, -100, 89};
    std::string arr3[sizeOfArr] = {"A, ", "B, ", "C, ", "D, ", "E, ", "F, ", "G, ", "H, ", "I, ", "J"};

    SumArray<float, sizeOfArr> float_sum;
    SumArray<int, sizeOfArr> float_int;
    SumArray<std::string, sizeOfArr> float_string;

    std::cout << float_sum.sum(arr1) << '\n';
    std::cout << float_int.sum(arr2) << '\n';
    std::cout << float_string.sum(arr3) << '\n';

    return 0;
}
