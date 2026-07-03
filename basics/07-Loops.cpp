#include <iostream>

int main() {
    // 3 ways to loop in C++:
    // 1. for loop       → use when you know exactly how many times to repeat
    // 2. while loop     → use when you don't know how many times, keeps running until condition is false
    // 3. do-while loop  → same as while but runs at least once before checking condition
    // 4. range-based for loop → loops through each element in an array automatically (like for...of in JS)

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

    // nested loops → loop inside another loop
    for(int m = 0; m < 3; m++) {      // outer loop → runs 3 times
        for(int n = 0; n < 2; n++) {  // inner loop → runs 2 times for each outer loop iteration
            std::cout << "Outer: " << m << ", Inner: " << n << std::endl;
        }
    }

    // looping through an array using a regular for loop + sizeof to get the length
    std::string fruits[] = {"Apple", "Banana", "Cherry"};
    for(int i = 0; i < sizeof(fruits)/sizeof(fruits[0]); i++) {
        std::cout << fruits[i] << std::endl;  // prints each fruit using index
    }

    // range-based for loop (also known as for-each loop) → C++ version of foreach, cleaner way to loop through arrays
    for(const std::string& fruit : fruits) {  // & means reference → reads value directly without copying, more efficient
        std::cout << fruit << std::endl;  // prints each fruit
    }

    return 0;
}