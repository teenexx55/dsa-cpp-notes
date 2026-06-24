#include <iostream>

int main() {

    int age = 20;

    // if → runs the block only if the condition is true
    if(age >= 18) {
        std::cout << "you are an adult" << std::endl;
    }

    // if/else → if condition is true run first block, otherwise run second block
    if(age >= 18) {
        std::cout << "you are an adult" << std::endl;
    } else {
        std::cout << "you are a minor" << std::endl;
    }

    // if/else if/else → check multiple conditions one by one
    // stops as soon as one condition is true
    if(age < 13) {
        std::cout << "you are a child" << std::endl;
    } else if(age < 18) {
        std::cout << "you are a teenager" << std::endl;
    } else if(age < 60) {
        std::cout << "you are an adult" << std::endl;
    } else {
        std::cout << "you are a senior" << std::endl;
    }

    // nested if → if inside another if
    // use when second condition only matters if first is already true
    if(age >= 18) {
        if(age >= 21) {
            std::cout << "you can drink in the US" << std::endl;
        } else {
            std::cout << "you are an adult but can't drink in the US" << std::endl;
        }
    }

    return 0;
}