#include <iostream>
#include <string>

void input(std::string *name, int *a, int *b)
{
    std::cout << "Enter your name: ";
    std::cin >> *name;
    std::cout << "Enter first number:";
    std::cin >> *a;
    std::cout << "Enter second number:";
    std::cin >> *b;
}

void output(std::string name, int a, int b)
{
    std::cout << "Your name: " << name << std::endl;
    std::cout << "Sum:" << a + b << std::endl;
}
