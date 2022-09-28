// Copyright Carolyn
// Created by: Carolyn Webster Pless
// Created on: 22/09/28
// Uses user input for the diameter and calculates a pizza cost

#include <iostream>
#include <iomanip>


int main() {
    // HST constant
    const float HST = .13;
    // variables
    int labour = 2;
    float rental = 2.25;
    float ingredients = 1.5;
    float diameter;
    float cost;
    float tax;
    float total;

    // title
    std::cout << "// "
                 "--.._\n";
    std::cout << "||  (_)  _ ''-._\n";
    std::cout << "||    _ (_)    '-.\n";
    std::cout << "||   (_)   __..-'\n";
    std::cout << "\\__..--"
                 "\n";
    std::cout << "Pizza Cost\n";

    // user input
    std::cout << "Enter the diameter of your pizza (cm): ";
    std::cin >> diameter;

    // calculations
    cost = labour + rental + (ingredients * diameter);
    tax = cost * HST;
    total = cost + tax;

    // output
    std::cout << "Your pizza will cost $" << std::fixed <<
    std::setprecision(2) << std::setfill('0') << total <<
    std::endl;
}
