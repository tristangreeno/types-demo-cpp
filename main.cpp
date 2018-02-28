#include <iostream>
#include "bad_adder.h"

int main() {
    int goodSum = 2 + 4;
    std::cout << "Good sum = " << goodSum << "\n";

    int badSum = bad_addition(2, 4);
    std::cout << "Bad sum = " << badSum << "\n";

    return 0;
}

