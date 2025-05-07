#include <iostream>

int main() {
    long long i;
    std::cin >> i;
    if (i < 2 || i > 10e14) {
        std::cout << "number must be in range of <2;10e14>" << std::endl;
        return 1;
    }

    // loop shown in the example
    // task: check whenever the algorithm loops or not
    // while (i != 1) if (i % 2 == 0) i = i / 2 else i = 3 * i + 3;

    // MODIFIED LOOP
    while (i != 1) {
        if (i % 2 == 0) {
            i /= 2;
            // PATTERN
            // in this algorithm every number goes down to 3 which causes the
            // loop
            if (i == 3) {
                std::cout << "NIE" << std::endl;
                return 1;
            }
        } else {
            i = 3 * i + 3;
        }
    }

    std::cout << "TAK" << std::endl;
}
