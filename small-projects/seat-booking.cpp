#include <iostream>
#include <algorithm>  // needed for fill()

// seat booking project using fill() to initialize all seats as "Empty" 
// and then allow user to book a seat and update the chart with name.

int main() {

    const int SIZE = 20;          // constant → total fixed number of seats available
    std::string seats[SIZE];      // array of 20 seats

    std::fill(seats, seats + SIZE, "Empty");  
    // fill() → fills all 20 seats with "Empty" in one line
    // without fill() you'd have to loop through all 20 and set each one manually
    // fill(start(beginning of array), end[seats + SIZE (one past the last element)], value["Empty" (what to fill with))]

    int seatNumber;
    std::string name;

    // let user book a seat
    std::cout << "===== SEAT BOOKER =====\n";
    std::cout << "Enter seat number (1-20): ";
    std::cin >> seatNumber;
    std::cin.ignore();  // clears newline left by cin >> so getline works after

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // update the seat → seatNumber - 1 because arrays start at index 0
    // seat 1 = index 0, seat 2 = index 1 etc.
    if(seatNumber < 1 || seatNumber > SIZE) {
        std::cout << "Invalid seat number!\n";  // handle invalid input
    } else if(seats[seatNumber - 1] != "Empty") {
        std::cout << "Seat already taken!\n";   // handle already booked seat
    } else {
        seats[seatNumber - 1] = name;           // book the seat
        std::cout << "Seat " << seatNumber << " booked for " << name << "!\n";
    }

    // print all seats
    std::cout << "\n===== SEATING CHART =====\n";
    for(int i = 0; i < SIZE; i++) {
        std::cout << "Seat " << i + 1 << ": " << seats[i] << "\n";
        // i + 1 because we want to show seat numbers starting from 1 not 0
        // since array indexing starts from 0
    }

    return 0;
}