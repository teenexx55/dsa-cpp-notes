// Topic: Hello World
// Concept: Basic structure of a C++ program



#include <iostream>  //Gives access to input and output streams 
                     //[let's us use std::cout(print) and std::cin(take input)]

int main() {         //Program execution starts from the main function.
    std::cout << "Hello, World!" << std::endl; //std::cout let's you print output on the screen.
                     //<< is the insertion operator, it inserts the data that follows it into the output stream.
                     //std::endl is used to insert a new line character and flush the output buffer.
    return 0;        //return 0 indicates that the program has ended successfully without any errors.
}

