#include <iostream>
#include "Sally.h"

int main() {
    Sally a(34);
    Sally b(21);
    Sally c;

    c = a + b;

    std::cout << "Number now: " << c.num << std::endl;


    Sally d(10);
    Sally e(2);
    Sally f;

    f = d / e;

    std::cout << "Number now: " << f.num << std::endl;

    return 0;
}