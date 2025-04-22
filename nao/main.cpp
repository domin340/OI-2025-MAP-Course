#include <iostream>

#define MAX_N 3

int main() {
    int nums[3];

    for (int i = 0; i < MAX_N; i++) {
        std::cin >> nums[i];

        if (nums[i] < -1000 || nums[i] > 1000) {
            std::cout << "provided n has to be in range of (-1000<=n<=1000)"
                      << std::endl;
            return 1;
        }
    }

    for (int i = MAX_N - 1; i >= 0; i--) {
        std::cout << nums[i] << std::endl;
    }

    return 0;
}
