#include <cmath>
#include <iostream>

/*
in(x, y, a)

func side(s, a) -> Integer:
    return floor(s / a)

result = (side(x, a) * 2) + ((side(y, a) - 2) * 2)

*/

constexpr int MIN = 1;
constexpr int MAX = 500000000;

bool is_in_range(int x, int min, int max) { return x > min && x < max; }

int sto_formula(int a, int b, int k) {
    return std::floor(a / k) * 2 + (floor(b / k) - 2) * 2;
}

int main() {
    int x, y, a;
    std::cin >> x;
    if (!is_in_range(x, MIN - 1, MAX + 1)) {
        std::cout << "number is not inside of range" << std::endl;
        return 1;
    }

    std::cin >> y;
    if (!is_in_range(y, MIN - 1, MAX + 1)) {
        std::cout << "number is not inside of range" << std::endl;
        return 1;
    }

    std::cin >> a;
    if (!is_in_range(a, MIN - 1, MAX + 1)) {
        std::cout << "number is not inside of range" << std::endl;
        return 1;
    }

    std::cout << sto_formula(x, y, a) << std::endl;

    return 0;
}
