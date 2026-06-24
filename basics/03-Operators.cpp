#include <iostream>

int main() {

    int x = 10;
    int y = 3;

    // Arithmetic Operators
    std::cout << x + y << std::endl;  // addition → 13
    std::cout << x - y << std::endl;  // subtraction → 7
    std::cout << x * y << std::endl;  // multiplication → 30
    std::cout << x / y << std::endl;  // division → 3 (decimals get dropped when dividing two ints)
    std::cout << x % y << std::endl;  // modulus → gives the remainder → 10 % 3 = 1

    // Increment & Decrement
    x++;  // increases x by 1 → shorthand for x = x + 1
    x--;  // decreases x by 1 → shorthand for x = x - 1

    // Assignment Operators
    x = 5;   // assigns 5 to x
    x += 3;  // same as x = x + 3
    x -= 3;  // same as x = x - 3
    x *= 3;  // same as x = x * 3
    x /= 3;  // same as x = x / 3
    x %= 3;  // same as x = x % 3

    // Comparison Operators (returns true or false)
    std::cout << (x == y) << std::endl;  // equal to
    std::cout << (x != y) << std::endl;  // not equal to
    std::cout << (x > y) << std::endl;   // greater than
    std::cout << (x < y) << std::endl;   // less than
    std::cout << (x >= y) << std::endl;  // greater than or equal to
    std::cout << (x <= y) << std::endl;  // less than or equal to

    // Logical Operators
    std::cout << (x > 5 && x < 20) << std::endl;  // AND → both conditions must be true
    std::cout << (x > 5 || x < 2) << std::endl;   // OR → at least one condition must be true
    std::cout << !(x == 5) << std::endl;           // NOT → reverses the result

    // Ternary Operator
    int grade = 75;
    grade >= 60 ? std::cout << "Pass" << std::endl : std::cout << "Fail" << std::endl;  
                               // if grade is greater than or equal to 60, print "Pass", else print "Fail"
    // Shorter way to write thr same ->
    std::cout << (grade >= 60 ? "Pass" : "Fail") << std::endl;


    // Bitwise Operators
    int a = 5;  // binary: 0101
    int b = 3;  // binary: 0011
    std::cout << (a & b) << std::endl;  // AND → 0101 & 0011 = 0001 → 1
    std::cout << (a | b) << std::endl;  // OR → 0101 | 0011 = 0111 → 7
    std::cout << (a ^ b) << std::endl;  // XOR → 0101 ^ 0011 = 0110 → 6
    std::cout << (~a) << std::endl;     // NOT →  ~0101 = 1010 → -6 (in two's complement representation)
    std::cout << (a << 1) << std::endl; // Left Shift → 0101 << 1 = 1010 → 10
    std::cout << (a >> 1) << std::endl; // Right Shift → 0101 >> 1 = 0010 → 2                         

    return 0;
}