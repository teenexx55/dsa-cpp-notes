#include <iostream>
#include <string>

// function takes two strings and returns one combined string
std::string greet(std::string name, std::string message) {
    return "hello, " + name + " " + message;  // joins the two strings with spaces in between
}

int main() {
    std::string firstname = "ishu";   // store first name
    std::string lastname = "Gupta";          // store last name
    std::string fullname = firstname + " " + lastname + "!";  // combine first + last name into one string

    std::cout << greet(fullname, "how are you?") << std::endl;  
    // calls greet() with fullname and a message → prints the final combined string

    return 0;  // ends the program successfully
}

// Simpler Version of the above code

#include <iostream>
#include <string>

std::string greet(std::string name, std::string message) {
    return "hello, " + name + " " + message;  // combine name + message into one greeting
}

int main() {
    std::cout << greet("ishu Gupta", "how are you?") << std::endl;  
    // directly pass the strings in, no need for extra variables
    return 0;
}