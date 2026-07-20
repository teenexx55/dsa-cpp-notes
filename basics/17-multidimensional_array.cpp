#include <iostream>

int main() {

    // 2D array/multidimensional array → array[rows][columns]
    // think of it like a table → rows going down, columns going across
    int numbers[3][3] = {
        {1, 2, 3},  // row 0
        {4, 5, 6},  // row 1
        {7, 8, 9}   // row 2
    };

    // accessing elements → array[row][column]
    std::cout << numbers[0][0] << std::endl;  // row 0, column 0 → 1
    std::cout << numbers[1][2] << std::endl;  // row 1, column 2 → 6
    std::cout << numbers[2][1] << std::endl;  // row 2, column 1 → 8

    // looping through a 2D array → need nested loops
    // outer loop → goes through each row
    // inner loop → goes through each column in that row
    for(int i = 0; i < 3; i++) {        // i → row
        for(int j = 0; j < 3; j++) {    // j → column
            std::cout << numbers[i][j] << " ";  // print each element
        }
        std::cout << "\n";  // new line after each row
    }

    // with strings → like a mini spreadsheet
    std::string students[2][3] = {
        {"Ishu", "16", "Noida"},    // row 0 → student 1
        {"Teenexx", "18", "Delhi"}  // row 1 → student 2
    };

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            std::cout << students[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}