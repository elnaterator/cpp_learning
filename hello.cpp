#include <iostream>

int main() {

    // std::cout is the standard output stream
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Have a good day!" << std::endl;

    // capture integer input variable x
    int x;
    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::cout << "You entered " << x << std::endl;

    // capture multiple values on a single line
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    std::cout << "You entered " << a << " and " << b << std::endl;

    // type conversion
    double d = 3.14;
    int i = d; // i = 3
    std::cout << "d = " << d << std::endl;
    std::cout << "i = " << i << std::endl;


    return 0;
}