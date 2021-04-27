// Copyright (c) 2021 Luke Beausoleil All rights reserved
//
// Created by: Luke Beausoleil
// Created on: April 2021
// This program calculates the price of a pizza with an inputted diameter

#include <iostream>
#include <iomanip>

int main() {
    // This function calculates the price of a pizza
    const float LABOR = 0.75;
    const float RENT = 1.00;
    const float MATERIALS = 0.50;
    const float HST = 1.13;

    float diameter;
    float subtotal;
    float price;

    // Input
    std::cout << "Enter diameter of pizza in inches: ";
    std::cin >> diameter;

    // Process
    subtotal = LABOR + RENT + (MATERIALS * diameter);
    price = subtotal * HST;

    // Output
    std::cout << "\nThe price of a " << diameter << " inch pizza is: $"
        << std::fixed << std::setprecision(2) << std::setfill('0') <<
        price << std::endl;
    std::cout << "\nDone." << std::endl;
}
