#include <iostream>

// a function is a reusable block of code that does a specific task
// instead of writing the same code multiple times, put it in a function and just call it

// function structure → returnType functionName(parameters) { body }

// void → function that does not return any value, just does something
void greet() {
    std::cout << "Hello!" << std::endl;
}

// function with parameters → you can pass values into a function
void greetUser(std::string name) {
    std::cout << "Hello " << name << "!" << std::endl;  // uses the passed value
}

// function with return type → does something and gives a value back
int add(int x, int y) {
    return x + y;  // return sends the result back to wherever the function was called
}

// function with multiple parameters
double multiply(double x, double y) {
    return x * y;
}

int main() {

    greet();                    // calling a void function → prints Hello!
    greetUser("Ishu");          // passing a value → prints Hello Ishu!

    int sum = add(5, 10);       // return value gets stored in sum
    std::cout << sum << std::endl;  // prints 15

    double result = multiply(3.5, 2.0);
    std::cout << result << std::endl;   // prints 7.0

    return 0;
}