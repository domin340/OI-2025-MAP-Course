#include <iostream>

#define INPUT_INT_LIMIT 500000000
#define OUTPUT_INT_LIMIT 2000000000
#define SHAPE_3D_SIDES_COUNT 3

constexpr int volume(int a, int b, int c) { return a * b * c; }

constexpr int surface_area(int a, int b, int c) {
    return 2 * (a * b + c * a + b * c);
}

int main() {
    int rect[SHAPE_3D_SIDES_COUNT];

    for (int i = 0; i < SHAPE_3D_SIDES_COUNT; i++) {
        std::cin >> rect[i];

        if (rect[i] < 1 || rect[i] >= INPUT_INT_LIMIT) {
            std::cout << "provided n has to be in range of (-1000<=n<=1000)"
                      << std::endl;
            return 1;
        }
    }

    int vol = volume(rect[0], rect[1], rect[2]);
    if (vol > OUTPUT_INT_LIMIT) {
        std::cout << "volume exceeds its limit: " << (OUTPUT_INT_LIMIT - 1)
                  << std::endl;
        return 1;
    }

    int surf_a = surface_area(rect[0], rect[1], rect[2]);
    if (surf_a > OUTPUT_INT_LIMIT) {
        std::cout << "surface_area exceeds its limit: "
                  << (OUTPUT_INT_LIMIT - 1) << std::endl;
        return 1;
    }

    std::cout << vol << " " << surf_a << std::endl;

    return 0;
}
