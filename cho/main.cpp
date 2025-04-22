#include <iomanip>
#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n < 2 || n > 20) {
        std::cout << "provided n has to be in range of (2<=n<=20)" << std::endl;
        return 1;
    }

    int root = n - 1;

    for (int i = root; i >= 0; i--) {
        std::cout << std::setw(i + 1);

        int d = (n - i);
        int size = ((d - 1) * 2) + 1;
        for (int j = 0; j < size; j++) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    for (int i = 0; i < 2; i++) {
        std::cout << std::setw(n) << "*" << std::endl;
    }

    return 0;
}
