#include <iostream>

constexpr int MIN = 1;
constexpr int MAX = 100000000;

constexpr int max(int a, int b) { return a > b ? a : b; }

bool is_in_range(int x, int min, int max) { return x > min && x < max; }

int main() {
    int a, b;
    std::cin >> a;
    if (!is_in_range(a, MIN - 1, MAX - 1)) {
        std::cout << "liczba nie jest w wyznaczonym przedziale" << std::endl;
        return 1;
    }

    std::cin >> b;
    if (!is_in_range(b, MIN - 1, MAX - 1)) {
        std::cout << "liczba nie jest w wyznaczonym przedziale" << std::endl;
        return 1;
    }

    std::cout << max(a, b) << std::endl;

    return 0;
}
