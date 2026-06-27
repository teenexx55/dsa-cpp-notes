#include <iostream>
#include <ctime>

int main() {
    srand(time(0));  // seed random number generator with current time

    int randNum = rand() % 5 + 1;  // generate random number which is used to determine the event

    switch(randNum) {
        case 1:
            std::cout << "You found a treasure!" << std::endl;
            break;
        case 2:
            std::cout << "You encountered a monster!" << std::endl;
            break;
        case 3:
            std::cout << "You found a healing potion!" << std::endl;
            break;
        case 4:
            std::cout << "You fell into a trap!" << std::endl;
            break;
        case 5:
            std::cout << "You found a secret passage!" << std::endl;
            break;
    }
    return 0;
}