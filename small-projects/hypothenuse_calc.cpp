#include <iostream>
#include <cmath>

int main() {
    double a, b, c;

    std::cout << "Enter Side A: ";
    std::cin >> a;

    std::cout << "Enter Side B: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));  // calculates hypotenuse using Pythagorean theorem a^2 + b^2 = c^2

    std::cout << "Side C: " << c << std::endl;  // prints the calculated hypotenuse
    return 0;
}