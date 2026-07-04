#include <iostream>

// function prototype → telling the compiler this function exists before main()
// C++ reads top to bottom → if we call getTotal() in main() but define it below main()
// compiler won't know it exists yet → prototype is a heads up to the compiler
// you can skip the prototype by writing the full function ABOVE main() instead
double getTotal(double marks[], int size);

int main() {
    double marks[] = {20.5, 30.5, 40.5, 50.5, 60.5};  // array of doubles → 5 elements

    int size = sizeof(marks) / sizeof(marks[0]);
    // sizeof(marks)    → total size of whole array in bytes → 5 elements x 8 bytes each = 40 bytes
    // sizeof(marks[0]) → size of just ONE element → marks[0] is the first element → 8 bytes
    // 40 / 8 = 5       → gives number of elements in the array
    // we use marks[0] because we just need the size of one element, [0] is just convention

    double total = getTotal(marks, size);
    // passing marks AND size to the function
    // why pass size again? → when an array is passed to a function, C++ only sends the memory address
    // it does NOT send the size info along with it
    // so inside getTotal(), the function has no idea how big the array is
    // that's why we manually pass size as a second parameter every time

    std::cout << "Total marks: " << total << std::endl;  // prints 202.5
    return 0;
}

double getTotal(double marks[], int size) {
    // marks[] and size here are NOT the same variables as in main()
    // they are COPIES with new names that only exist inside this function
    // C++ makes copies of the values passed in and gives them to the function
    // you could name them anything → double getTotal(double grades[], int length) works exactly the same

    double total = 0;  // start total at 0
    for(int i = 0; i < size; i++) {
        total += marks[i];  // += adds each element to total one by one
                            // same as total = total + marks[i]
                            // marks[0] = 20.5, marks[1] = 30.5 ... and so on
    }
    return total;  // sends the final total back to wherever the function was called
                   // in main() → stored in double total variable
}