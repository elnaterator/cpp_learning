#include <iostream>
#include <string>

int main() {
    
    int i = 5;
    double d = 3.14;

    double i1 = (double) i;
    int d1 = (int) d;

    std::cout << "i = " << i << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "i1 = " << i1 << std::endl;
    std::cout << "d1 = " << d1 << std::endl;

    char first_letter = 'a';
    std::cout << "first_letter = " << first_letter << std::endl;

    std::string name = "John";
    std::cout << "name = " << name << std::endl;

    // concatenate strings
    std::string greeting = "Hello, " + name + "!";
    std::cout << greeting << std::endl;

    


    return 0;
}