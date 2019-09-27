// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Marwan Mashaly
// Created on: September 2019
// This program calculates the perimeter of a hexagon
//    with user input

#include <iostream>

int main() {
    // this function calculates the area and perimeter
    int sidelength;
    int perimeter;

    // input
    std::cout << "Enter sidelength of the hexagon (cm): ";
    std::cin >> sidelength;

    // process
    perimeter = 6*sidelength;

    // output
    std::cout << "" << std::endl;
    std::cout << "Perimeter is " << perimeter << " cm" << std::endl;
}
