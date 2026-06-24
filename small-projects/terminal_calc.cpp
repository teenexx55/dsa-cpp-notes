#include <iostream>

int main() {
    char op;
    double num1, num2;

    std::cout << "************ CALCULATOR ************" << std::endl;

    std::cout << "Enter Operator (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Enter #1: ";
    std::cin >> num1;
    std::cout << "Enter #2: ";
    std::cin >> num2;

    switch (op) {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
            break;

        case '-':
            std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
            break;

        case '*':
            std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
            break;

        case '/':
            if (num2 != 0) {
                std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
            } else {
                std::cout << "Error: Division by zero!" << std::endl;
            }
            break;

        default:
            std::cout << "Error: Invalid operator!" << std::endl;
    }
   

    std::cout << "************************************" << std::endl;
}