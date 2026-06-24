#include <iostream>

int main() {

    int month;
    std::cout << "Enter a month number (1-12): ";
    std::cin >> month;  // takes input from user and stores it in month

    // switch checks the value of month and jumps to the matching case
    // cleaner than writing a bunch of if/else when checking one variable against many values
    switch(month) {
        case 1:
            std::cout << "January" << std::endl;
            break;  // break stops the switch → without it, it falls through to the next case
        case 2:
            std::cout << "February" << std::endl;
            break;
        case 3:
            std::cout << "March" << std::endl;
            break;
        case 4:
            std::cout << "April" << std::endl;
            break;
        case 5:
            std::cout << "May" << std::endl;
            break;
        case 6:
            std::cout << "June" << std::endl;
            break;
        case 7:
            std::cout << "July" << std::endl;
            break;
        case 8:
            std::cout << "August" << std::endl;
            break;
        case 9:
            std::cout << "September" << std::endl;
            break;
        case 10:
            std::cout << "October" << std::endl;
            break;
        case 11:
            std::cout << "November" << std::endl;
            break;
        case 12:
            std::cout << "December" << std::endl;
            break;
        default:  // runs if no case matches → like the "else" of a switch
            std::cout << "Invalid month number" << std::endl;
    }

    return 0;
}