#include <cmath>
#include <iostream>
#include <vector>

bool can_realize(const std::vector<unsigned int> &stock, int x) {
    int sum = 0;
    for (int stock_i = stock.size(); stock_i >= 0; --stock_i) {
        unsigned int stock_number = stock[stock_i];
        unsigned int value = std::pow(2, stock_i);

        for (int i = 0; i < stock_number; i++) {
            if (sum + value <= x) {
                sum += value;
                if (sum == x)
                    return true;
            }
        }
    }

    return false;
}

int main() {
    /*
        1 <= k <= 10;
        k - pepper max mass (2^k);
    */
    int k;
    std::cin >> k;
    if (k < 1 || k > 10) {
        std::cout << "k has to be in range of <1;10>" << std::endl;
        return 1;
    }

    /*
        [n0, ..., nk+1] - their corresponding number of stock
    */
    auto stock = std::vector<unsigned int>();
    for (int i = 0; i < k + 1; i++) {
        unsigned int stock_number;
        std::cin >> stock_number;
        if (stock_number > 1000) {
            std::cout << "stock number must be under 1000 and greater than 0"
                      << std::endl;
            return 1;
        }

        stock.push_back(stock_number);
    }

    /*
        EXAMPLE:

        k = 2
        n = [
            2, # there are 2 for peppers stock n0
            1, # 1 pepper for stock n1
            1, # 1 pepper for stock n2 (our last pepper mass (nk+1))
        ]
    */

    int x = 1;
    while (can_realize(stock, x)) {
        x++;
    }

    std::cout << x << std::endl;

    return 0;
}
