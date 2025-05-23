#include <iostream>

int main() {
    int nums[3];

    for (int i = 0; i < 3; i++) {
        std::cin >> nums[i];

        if (nums[i] < -1000 || nums[i] > 1000) {
            std::cout << "provided n has to be in range of (-1000<=n<=1000)"
                      << std::endl;
            return 1;
        }
    }

    for (int i = 2; i >= 0; i--) {
        std::cout << nums[i] << std::endl;
    }

    return 0;
}
