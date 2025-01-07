

// Q2 Write a program in C++ to convert temperature 
// in Kelvin to Fahrenheit.

#include <iostream>
using namespace std;

int main() {

    float K, F;

    cout << "Enter Temperatur in Kelvin (K)..." << endl;
    cin >> K;

    F = (K - 273.15) * 1.8 + 32;

    cout << "The: " << K << "Kelvin " << endl; 
    cout << "Conversion to Fahrenheit: " << F << "F" << endl; 
    
}