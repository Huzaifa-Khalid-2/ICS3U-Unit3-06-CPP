// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Huzaifa Khalid
// Created on: March 2022
// This function takes a random integer between 0-9
// and tells the user if they guessed corretly

#include <iostream>
#include <random>

int main() {
    // This function takes a random integer between 0-9
    // and tells the user if they guessed corretly
    int number;
    int user_guess;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  // [0,9]
    number = idist(rgen);

    // input
    std::cout << "Enter a random number between 0-9 (integer): ";
    std::cin >> user_guess;
    std::cout << "" << std::endl;

    // process and output
    if (user_guess == number) {
        std::cout << "Hooray you guessed correctly !! :)" << std::endl;
    } else {
    std::cout << "Oh No!!! guessed incorrectly :("
        << std::endl;
    }
    std::cout << "" << std::endl;
    std::cout << "\nDone.";
}
