#ifndef TYPES_DEMO_BAD_ADDER_H
#define TYPES_DEMO_BAD_ADDER_H

#include <cstdio>
#include <iostream>

int bad_addition(const int x, const int y) {
    std::cout << "I'm doing bad stuff!" << "\n";
    getchar();

    return x + y;
}
#endif //TYPES_DEMO_BAD_ADDER_H
