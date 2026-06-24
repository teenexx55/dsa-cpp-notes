#include <iostream>

int main() {

    // for loop → use when you know exactly how many times you want to repeat
    // for(start; condition; update)
    for(int i = 0; i < 5; i++) {
        std::cout << i << std::endl;  // prints 0 1 2 3 4
    }

    // while loop → use when you don't know how many times, keeps running as long as condition is true
    int i = 0;
    while(i < 5) {
        std::cout << i << std::endl;  // prints 0 1 2 3 4
        i++;  // don't forget to update → without this it runs forever (infinite loop)
    }

    // do while loop → runs the block at least once, then checks the condition
    // difference from while → while checks condition first, do while runs first then checks
    int j = 0;
    do {
        std::cout << j << std::endl;  // prints 0 1 2 3 4
        j++;
    } while(j < 5);

    // break → exits the loop immediately when condition is met
    for(int k = 0; k < 10; k++) {
        if(k == 5) break;             // stops loop when k hits 5
        std::cout << k << std::endl;  // prints 0 1 2 3 4
    }

    // continue → skips current iteration and moves to next one
    for(int k = 0; k < 10; k++) {
        if(k == 5) continue;          // skips 5 and keeps going
        std::cout << k << std::endl;  // prints 0 1 2 3 4 6 7 8 9
    }

    return 0;
}