

// Q1 Write a program in C++ that converts kilometers 
// per hour to miles per hour.
#include <iostream>
using namespace std;

int main() {

    float kmph, miph;

    cout << "Enter Distance in Kilometer Per Hour..." << endl;
    cin >> kmph;

    miph = kmph * 0.621371;

    cout << "The" << kmph << "Km/hr in Miles Per Hour: " << miph; 
}
