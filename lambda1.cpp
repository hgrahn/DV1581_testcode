#include <iostream>

void fcn1()
{
    size_t v1 = 42;  // local variable
    // copies v1 into the callable object named f
    auto f = [v1] { return v1; };
    // the object f2 contains a reference to v1
    auto f2 = [&v1] { return v1; };

    v1 = 0;
    // j is 42; f stored a copy of v1 when we created it
    auto j = f();

    auto k = f2(); // k is 0; f2 refers to v1; it doesn't store it
    for (int i = 0; i < 10; ++i) {
        auto f3 = [i] { return i; };
        std::cout << "i = " << i << ", lambda = " << f3() << std::endl;
    }

}

int main()
{
    fcn1();
}
