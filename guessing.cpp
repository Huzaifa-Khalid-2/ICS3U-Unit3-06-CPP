// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Huzaifa Khalid
// Created on: March 2022
// This function takes a random integer between 0-9
// and tells the user if they guessed corretly

#include <iostream>
#include <random>

int main() {
    // this function checks for the random number
    int guessed_as_number;
    std::string guessed_input;
    int random_guess;

    std::random_device rseed;
    std::mt19937 rgen(rseed());
    // mersence_twister
    std::uniform_int_distribution<int> idist(0, 9);
    // [0, 9]
    random_guess = idist(rgen);

    // input
    std::cout << "Enter a random number between 0 and 9 (integer): ";
    std::cin >> guessed_input;
    std::cout << "" << std::endl;

    // process and output
    try {
        guessed_as_number = std::stoi(guessed_input);
        if (guessed_as_number == random_guess) {
            std::cout << "Correct" << std::endl;
        } else {
            std::cout << "Wrong the number is "
                     << random_guess << std::endl;
        }
    }
    catch (std::invalid_argument) {
        std::cout << "Really? (-_-)ゞ pick a Integer pls." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
