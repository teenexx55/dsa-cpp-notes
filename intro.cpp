#include <iostream> 
// int main() {
//     std::cout << "Hello, World!" << std::endl;
//     return 0;
// }

// int main() {
//     int x; //declatre the value 
//     x = 5; //assign the value
//     std::cout << x; //print the value
//     return 0; //end of the program
// }

// int main() {
//     int x = 5;
//     int y = 10;
//     int sum = x + y; //calculate the sum of x and y
//     std::cout << sum << std::endl; //print the sum
//     return 0;
// }
//integer (whole number)
// int age = 21;
// int year = 2023;
// int days = 7;

//double (number including decimal)
// double price = 10.99;
// double gpa = 2.5;
// double temperature = 25.1;

//single character
// char grade = 'A';
// char initial = 'B';

// boolean (true or false)
// bool student = false;
// bool power = true;

// string (objects that represents a sequence of text)
// std::string name = "Bro";

// namespace first{
// int x = 1;
// }

// namespace second{
// int x = 2;
// }
// int main() {
// int x = 0;
// std::cout << first::x << std::endl;  //(scope resolution operator)
// return 0;
// }

int main() {
    int month;
    std::cout << "Enter a month number (1-12): ";
    std::cin >> month;
    
    switch(month) {
        case 1:
        std ::cout << "January" << std::endl;
        break;
        case 2:
        std ::cout << "February" << std::endl;
        break;
        case 3:
        std ::cout << "March" << std::endl;
        break;
        case 4:
        std ::cout << "April" << std::endl;
        break;       
        case 5:
        std ::cout << "May" << std::endl;
        break;
        default:
        std ::cout << "Invalid month number" << std::endl;
    }
    return 0;
}