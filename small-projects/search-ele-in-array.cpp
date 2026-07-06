#include <iostream>

int search(int arr[], int size, int element);  // function prototype → tells the compiler this function exists before main()

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  // array of integers → fixed size → 10 elements
    int size = sizeof(arr)/sizeof(arr[0]);  // calculate number of elements in the array
    int index;
    int myNum;

    std::cout << "ENTER THE NUMBER YOU WANT TO SEARCH: ";
    std::cin >> myNum;

    index = search(arr, size, myNum);  // call the search function and store the result in search variable

    if(index != -1) {
        std::cout << "ELEMENT FOUND AT INDEX: " << index << std::endl;  // print the index if found
    } else {
        std::cout << "ELEMENT NOT FOUND" << std::endl;  // print not found message
    }

    return 0;
}

// Using linear search algorithm to find the element in the array.
//Linear search algorithm is a simple search algorithm that checks 
//every element in the array until it finds the target element or 
//reaches the end of the array. It has a time complexity of O(n) 
//in the worst case, where n is the number of elements in the array.

int search(int arr[], int size, int element) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == element) {
            return i;
        }
    }
    return -1;  // return -1 if the element is not found
}