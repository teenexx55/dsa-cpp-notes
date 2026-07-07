#include <iostream>

void sort(int array[], int size) {
    int temp;  // temporary variable → used to swap two elements, holds one value while we move the other

    // bubble sort → compares adjacent elements and swaps them if they're in wrong order
    // keeps doing this until the biggest number "bubbles up" to the end
    // runs size-1 passes because after each pass the largest element is already in place

    for(int i = 0; i < size - 1; i++) {          // outer loop → controls how many passes we do
        for(int j = 0; j < size - i - 1; j++) {  // inner loop → compares adjacent pairs
                                                   // size - i - 1 → shrinks each pass because last i elements are already sorted
            if(array[j] < array[j + 1]) {         // if current element is LESS than next → swap (sorts descending)
                                                   // change < to > if you want ascending order
                temp = array[j];                   // step 1 → save current element in temp
                array[j] = array[j + 1];           // step 2 → move next element to current position
                array[j + 1] = temp;               // step 3 → put saved element in next position
            }                                      // swap complete → bigger number moved to the left
        }
    }
}

int main() {
    int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int size = sizeof(array) / sizeof(array[0]);  // calculate number of elements → 10

    sort(array, size);  // pass array and size to sort function

    for(int i = 0; i < size; i++) {
        std::cout << array[i] << " ";  // print each sorted element
    }

    return 0;
}