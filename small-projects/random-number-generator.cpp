#include <iostream>

int main() {

    srand(time(0));  // seed random number generator with current time

    int num = rand() % 100 + 1;  // generate random number between 1 and 100
    std::cout << num << std::endl;  // print the random number

    return 0; //end of the program
}