// Copyright (c) 2021 Brian Musembi All Rights Reserved
//
// Created by: Brian Musembi
// Created on: 05 May 2021
// This program tells if a number is positive, negative or just zero

#include <iostream>

int main() {
    // this function tells if a number is positive, negative or just zero
    int integer;


    // input
    std::cout << "Enter an integer: ";
    std::cin >> integer;

    // process
    if (integer > 0) {
        // output
        std::cout << integer << " is a positive number.";
        std::cout << "" << std::endl;
    // process
}   else if (integer < 0) {
        // output
        std::cout << integer << " is a negative number.";
        std::cout << "" << std::endl;
    // process
}   else {
        // output
        std::cout << integer << " is just zero!";
        std::cout << "" << std::endl;}
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
