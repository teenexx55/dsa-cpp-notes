#include <iostream>

int main() {

    int arr[] = {1, 2, 3, 4, 5};  // array of integers → fixed size → 5 elements

    std::cout << arr[0] << std::endl;  // access first element → 1 (computer counts from 0)
    std::cout << arr[1] << std::endl;  // access second element → 2
    std::cout << arr[2] << std::endl;  // access third element → 3
    std::cout << arr[3] << std::endl;  // access fourth element → 4
    std::cout << arr[4] << std::endl;  // access fifth element → 5

    double arr2[] = {1.5, 5.5, 10.5, 20.7};  // array of doubles → fixed size → 4 elements

    std::cout << arr2[0] << std::endl;  // access first element → 1.5
    std::cout << arr2[1] << std::endl;  // access second element

    return 0;

    // insted of calling each element one by one, we can use a loop to 
    //iterate through the array and print all elements.

    int arr3[] = {10, 20, 30, 40, 50};  
    for (int i = 0; i < 5; i++) {  // loop through the array → i is the index
        std::cout << arr3[i] << std::endl;  // print each element
    }

    // to calculate size automatically, we can use sizeof() operator to get the 
    //size of the array and divide it by the size of one element to get the 
    //number of elements in the array.

    int arr4[] = {5, 15, 25, 35, 45, 55};  // array of integers → fixed size → 6 elements
    int size = sizeof(arr4) / sizeof(arr4[0]);  // calculate number of elements in the array
    for (int i = 0; i < size; i++) {  // loop through the array using calculated size
        std::cout << arr4[i] << std::endl;  // print each element
    }
 
}