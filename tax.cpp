// Copyright (c) 2023 Julien Lamoureux All rights reserved.
// .
// Created by: Julien Lamoureux
// Date: October 11, 2023
// This program calculates the tax and total using the subtotal

#include <cmath>
#include <iostream>
#include <iomanip>

int main() {
    // declare variables and constants
    float subtotal, tax, total, roundedTotal, roundedTax;
    const float HST = 0.15;

    // get the subtotal
    std ::cout << "Tax and Total Cost of an Item using Subtotal" << std::endl;
    std::cout << "Enter the subtotal cost ($) for your item: ";
    std::cin >> subtotal;

    // calculate subtotal, tax, and total
    tax = HST * subtotal;
    total = subtotal + tax;

    // display the total and tax
    std::cout << "Cost= $" << std::fixed <<
        std::setprecision(2) << std::setfill('0') << tax << std::endl;
    std::cout << "Tax= $" << std::fixed <<
        std::setprecision(2) << std::setfill('0') << total << std::endl;
}
