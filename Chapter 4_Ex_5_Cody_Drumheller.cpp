/*
Title: Chapter 4 Exercise 15 Shipping Charges
File Name:Chapter4_ex_15_Cody_Drumheller
Programmer: Cody Drumheller
Date:20241206
Requirements: Write a program that ask for the weight of the package and the distance 
it is to be shipped, then displays the charges.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double weight, distance, rate = 0.0, totalCharge;

    cout << "Enter the weight of the package (in kilograms): ";
    cin >> weight;

    if (weight <= 0 || weight > 20) {
        cout << "Error: Weight must be greater than 0 and no more than 20 kilograms." << endl;
        return 1; 
    }

    cout << "Enter the distance to be shipped (in miles): ";
    cin >> distance;

    if (distance < 10 || distance > 3000) {
        cout << "Error: Distance must be between 10 and 3000 miles." << endl;
        return 1; 
    }

    if (weight <= 2) {
        rate = 1.10;
    }
    else if (weight <= 6) {
        rate = 2.20;
    }
    else if (weight <= 10) {
        rate = 3.70;
    }
    else if (weight <= 20) {
        rate = 4.80;
    }

    int num500Miles = static_cast<int>(ceil(distance / 500.0)); 
    totalCharge = rate * num500Miles;

    cout << "The total shipping charge is: $" << totalCharge << endl;

    return 0;
}

