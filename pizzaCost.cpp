// Copyright (c) 2022 Van Nguyen All rights reserved.
//
// Created by: Van Nguyen
// Date: September 28th, 2022
// This program calculates and displays the total cost of a pizza
// based on the user input of the diameter + tax.

#include <iomanip>
#include <iostream>

int main() {
    // Declared Constants
    const float HST = 0.13;
    const float LABOUR_COST = 2.00;
    const float RENTAL_COST = 2.25;
    const float INGREDIENT_COST = 1.50;

    // Initialized Variables
    float diameter, subtotal, total, tax;

    // Gets user input for what the length of the diameter is
    std::cout << "Enter the diameter of your Pizza (inches): ";
    std::cin >> diameter;

    // Calculates the total cost of the pizza
    subtotal = diameter * INGREDIENT_COST + RENTAL_COST + LABOUR_COST;
    tax = subtotal * HST;
    total = subtotal + tax;

    // Displays the total cost of the pizza to the user
    std::cout << "The cost of the pizza: $" << std::fixed
    << std::setprecision(2) << std::setfill('0') << total << "\n";
}
