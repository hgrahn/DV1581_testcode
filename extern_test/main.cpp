#include <iostream>
extern int global_int; // declaration
extern void fcn(); // declaration
int main() {
    // prints 0
    std::cout << global_int << std::endl;
    fcn(); // call fcn
    // prints 2
    std::cout << global_int << std::endl;
}
