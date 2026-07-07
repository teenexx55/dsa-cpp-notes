#include <iostream>
#include <string>

int main() {

    // sizeof() → returns how many bytes a variable or data type takes up in memory

    std::string name = "teenexx";
    double num = 10.5;
    char letter = 'A';
    bool isTrue = true;

    std::cout << sizeof(name) << std::endl;    // size of string object in memory
    std::cout << sizeof(num) << std::endl;     // 8 bytes → double always takes 8 bytes
    std::cout << sizeof(letter) << std::endl;  // 1 byte → char always takes 1 byte
    std::cout << sizeof(isTrue) << std::endl;  // 1 byte → bool always takes 1 byte

    // arrays
    char arr[] = {'a', 'b', 'c', 'd'};  // array of 4 chars

    std::cout << sizeof(arr) << std::endl;         // total size of array in bytes → 4 (4 chars x 1 byte each)
    std::cout << sizeof(arr) / sizeof(arr[0]);     // total size / size of one element → gives number of elements → 4
                                                 // this is the standard way to find array length in C++

    std::string students[] = {"student1", "student2", "student3"};  // array of strings
    std::cout << sizeof(students) / sizeof(students[0]);  // number of elements → 3

    return 0; // reutrn 0 → indicates program ran successfully
}