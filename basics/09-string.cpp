#include <iostream>
#include <string>

int main() {

    std::string name = "teenexx";

    std::cout << name << std::endl;              // print the string → teenexx
    std::cout << name.length() << std::endl;     // length → number of characters → 7
    std::cout << name[0] << std::endl;           // indexing → access a character by position → 't' (starts from 0)
    std::cout << name.at(1) << std::endl;        // .at() → safer way to access a character → 'e'

    name.append("55");                           // append → adds text to the end → "teenexx55"
    std::cout << name << std::endl;

    name.erase(7, 2);                            // erase → removes characters → (start position, how many) → "teenexx"
    std::cout << name << std::endl;

    std::cout << name.find("xx") << std::endl;   // find → returns position of substring → 5
    std::cout << name.empty() << std::endl;      // empty → returns 1 if string is empty, 0 if not → 0
    std::cout << name.substr(0, 5) << std::endl; // substr → extracts part of string → (start, length) → "teene"

    name.append("@gmail.com");                   // append → building an email from a username
    std::cout << name << std::endl;              // teenexx@gmail.com

    return 0;
}

//For more visite https://cplusplus.com/reference/string/string/ 