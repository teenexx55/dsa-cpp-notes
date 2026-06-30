#include <iostream>

void makeMaggie();
void makeMaggie(std::string type1, std::string type2);

int main() {
    makeMaggie();  // calling the function to make Maggie
    makeMaggie("Spicy", "Cheesy");  // calling the overloaded function with arguments
    return 0;
}

void makeMaggie() {
    std::cout << "Here is your Maggie!" << std::endl;  // prints a message indicating Maggie is ready to serve.
}

void makeMaggie(std::string type1, std::string type2) {
    std::cout << "Here is your " << type1 << " and " << type2 << " Maggie!" << std::endl;
}