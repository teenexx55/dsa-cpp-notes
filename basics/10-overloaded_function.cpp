#include <iostream>

// Function Overloading
// same function name "makeMaggie" but different parameters
// C++ picks the right version based on what you pass in when calling it

void makeMaggie();  // declaration → version 1, takes nothing
void makeMaggie(std::string type1, std::string type2);  // declaration → version 2, takes two strings

int main() {
    makeMaggie();                        // no arguments → calls version 1
    makeMaggie("Spicy", "Cheesy");        // two arguments → calls version 2

    return 0;
}

// version 1 → no parameters
void makeMaggie() {
    std::cout << "Here is your Maggie!" << std::endl;
}

// version 2 → two string parameters
void makeMaggie(std::string type1, std::string type2) {
    std::cout << "Here is your " << type1 << " and " << type2 << " Maggie!" << std::endl;
    // type1 and type2 get filled in with whatever values are passed when called
}