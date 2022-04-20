// Copyright (c) 2022 Yiyun Qin All rights reserved
//
// Created by Yiyun Qin
// Created in April 2022
// This is a math program, calculating square from 0 to n

#include <iostream>
#include <string>
#include <cmath>

int main() {
    // This function shows the square of the number
    std::string squareString;
    int squareNumber;
    int answer;

    // input
    std::cout << "Enter a positive integer: ";
    std::cin >> squareString;

    // process
    std::cout << "" << std::endl;
    try {
        squareNumber = std::stoi(squareString);
        for (int loopCounter = 0; loopCounter <= squareNumber; loopCounter++) {
            answer = pow(loopCounter, 2);
            std::cout << loopCounter << "² = " << answer << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid number!" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
