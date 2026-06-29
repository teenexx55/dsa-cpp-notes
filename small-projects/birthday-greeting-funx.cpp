#include <iostream>

void birthdayGreeting(std::string name) {
    std::cout << "Happy birthday " << name << "!" << std::endl;
}
int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    birthdayGreeting(name);  // calling the birthday greeting function
    return 0;
}