#include <iostream>
#include "io_hello.h"

int main()
{
    std::string name = "";
    int a = 0;
    int b = 0;

    input(&name, &a, &b);
    output(name, a, b);
    return 0;
}

