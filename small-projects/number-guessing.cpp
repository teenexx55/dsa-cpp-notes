#include <iostream>

int main() {

    int num;
    int guess;
    int attempts = 0;

    srand(time(0));
    num = rand() % 100 + 1;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I have selected a number between 1 and 100." << std::endl;
    std::cout << "Can you guess what it is?" << std::endl;

    do {
        std::cout<< "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < num) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > num) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Correct! The number was " << num << "." << std::endl;
        }
    } while (guess != num);

    std::cout << "Congratulations! You guessed the number in " << attempts << " attempts." << std::endl;

    return 0;
}