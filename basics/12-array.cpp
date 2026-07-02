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
 
}