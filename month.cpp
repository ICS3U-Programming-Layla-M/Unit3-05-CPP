// Copyright (c) Year Layla Michel All rights reserved.
//
// Created by: Layla Michel
// Created on: May 13, 2021
// This program uses a switch statement, asks the user to input
// a number between 1 and 12 and display which month that number
// corresponds to

#include <iostream>

int main() {
    // declare variable
    int monthNumber;

    // ask the user to input a number between 1 and 12
    std::cout << "Enter a number between 1 and 12: ";
    std::cin >> monthNumber;

    // display which month corresponds to which number
    switch (monthNumber) {
        case 1:
        std::cout << monthNumber << " represents January.\n";
        break;

        case 2:
        std::cout << monthNumber << " represents February.\n";
        break;

        case 3:
        std::cout << monthNumber << " represents March.\n";
        break;

        case 4:
        std::cout << monthNumber << " represents April.\n";
        break;

        case 5:
        std::cout << monthNumber << " represents May.\n";
        break;

        case 6:
        std::cout << monthNumber << " represents June.\n";
        break;

        case 7:
        std::cout << monthNumber << " represents July.\n";
        break;

        case 8:
        std::cout << monthNumber << " represents August.\n";
        break;

        case 9:
        std::cout << monthNumber << " represents September.\n";
        break;

        case 10:
        std::cout << monthNumber << " represents October.\n";
        break;

        case 11:
        std::cout << monthNumber << " represents November.\n";
        break;

        case 12:
        std::cout << monthNumber << " represents December.\n";
        break;

        // if none of the above statements are true
        default:
        std::cout << monthNumber << " does not represent a month.\n";
        break;
    }
}
