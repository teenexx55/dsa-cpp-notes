#include <iostream>
#include <algorithm>  // needed for fill()

int main() {

    const int SIZE = 10;       // constant → size of array, can't be changed
    std::string fruits[SIZE];   // empty array of 10 strings

    // fill() → fills a range of elements with a specified value
    // fill(start, end, value)
    // start → where to begin filling
    // end   → where to stop filling (not included)
    // value → what to fill with

    std::fill(fruits, fruits + (SIZE/2), "apple");      // fills first half → index 0 to 4 with "apple"
    std::fill(fruits + (SIZE/2), fruits + SIZE, "banana");  // fills second half → index 5 to 9 with "banana"

    for(std::string fruit : fruits) {
        std::cout << fruit << "\n";  // prints each element one by one
    }

    return 0;
}