/*

# INSTRUCTIONS

1. We divide the year number by 19 and find the remainder a .
2. We divide the year by 100, round the result down (cut off the fractional
part) and get the number b.
3. We divide the year by 100 and get the remainder c.
4. We count: b / 4 and round the result down to get the number d.
5. We calculate: b / 4 and determine the remainder e .
6. We count: ( b + 8) / 25 and round the result down to get the number f.
7. We count: ( b – f + 1) / 3 and round the result down to get the number g .
8. We calculate: (19 * a + b – d – g + 15) / 30 and determine the remainder h.
9. We count: c / 4 and round the result down to get the number i.
10. We calculate: c / 4 and determine the remainder k.
11. We count: (32 + 2 * e + 2 * i – h – k ) / 7 and we get the remainder l.
12. We calculate: ( a + 11 * h + 22 * l ) / 451 and we round the result down to
get the number m.
13. We calculate: ( h + l – 7 * m + 114) / 31 and we get the remainder p.

* Easter Day = p + 1.
* Month = Round down dividing (h + l – 7 * m + 114) by 31.

*/

#include <cmath>
#include <iostream>

int main() {
    int year;
    std::cin >> year;
    if (year < 1800 || year >= 2200) {
        std::cout
            << "given year is invalid try something in range: 1800<=x<2200"
            << std::endl;
        return 1;
    }

    int a = year % 19;
    int b = year / 100;
    int c = year % 100;
    int d = b / 4;
    int e = b % 4;
    int f = (b + 8) / 25;
    int g = (b - f + 1) / 3;
    int h = (19 * a + b - d - g + 15) % 30;
    int i = c / 4;
    int k = c % 4;
    int l = (32 + 2 * e + 2 * i - h - k) % 7;
    int m = (a + 11 * h + 22 * l) / 451;
    int p = (h + l - 7 * m + 114) % 31;

    int easter_day = p + 1;
    int easter_month = (h + l - 7 * m + 114) / 31;

    std::cout << easter_day << " " << easter_month << std::endl;

    return 0;
}
