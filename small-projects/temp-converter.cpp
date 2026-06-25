#include <iostream>

int main() {
    double temperature;
    char unit;

    std::cout << "************ TEMPERATURE CONVERTER ************" << std::endl;

    std::cout << "Enter unit (C for Celsius, F for Fahrenheit): "; 
    std::cin >> unit;

    if(unit == 'F' || unit == 'f') {
        std::cout << "Enter temperature: ";
        std::cin >> temperature;

        temperature = (temperature - 32.0) / 1.8;
        std::cout << "Temperature is: " << temperature << "C" << std::endl;
    } else if(unit == 'C' || unit == 'c') {
        std::cout << "Enter temperature: ";
        std::cin >> temperature;

        temperature = (1.8 * temperature) + 32.0;
        std::cout << "Temperature is: " << temperature << "F" << std::endl;
    } else {
        std::cout << "Error: Invalid unit!" << std::endl;
    }

    std::cout << "***********************************************" << std::endl;

    return 0;
}