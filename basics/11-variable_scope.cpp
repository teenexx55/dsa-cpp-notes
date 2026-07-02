#include <iostream>

int globalVar = 100;  // global variable → declared outside all functions
                      // accessible from anywhere in the program

void showScope() {
    int localVar = 50;  // local variable → declared inside a function
                        // only accessible within this function, dies when function ends

    std::cout << globalVar << std::endl;  // can access global variable from inside a function
    std::cout << localVar << std::endl;   // can access local variable inside its own function
}

int main() {
    int localVar = 10;  // different localVar → same name but different scope than the one in showScope()
                        // these two localVars have nothing to do with each other

    std::cout << globalVar << std::endl;  // can access global variable from main too
    std::cout << localVar << std::endl;   // accesses main's localVar → 10, not 50

    showScope();  // calls showScope → prints 100 then 50

    // std::cout << localVar from showScope → ERROR! can't access another function's local variable

    return 0;
}

// key rules:
// global → declared outside all functions → accessible everywhere
// local  → declared inside a function → only lives inside that function
// if global and local have the same name → local wins inside that function (shadowing)

/*
  **************** TO ACCESS A COPY OF LOCAL VARIABLE OUTSIDE ITS FUNCTION ****************
*/

#include <iostream>

void printName(std::string name) {  
    // name is a local variable here → only exists inside this function
    std::cout << name << std::endl;
}

int main() {
    std::string myName = "teenexx";  // local variable inside main

    printName(myName);  // passing myName as an argument → its VALUE gets copied into name parameter
                        // this is how you "share" a local variable with another function
                        // you can't access myName directly in printName, but you pass its value

    return 0;
}