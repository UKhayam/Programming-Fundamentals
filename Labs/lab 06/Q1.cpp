
#include <iostream>

using namespace std;

int main () {

    int sum = 0;

    int iteration = 1;

    // ( 1 <= 10 ) Run 10 Times
    while ( iteration <= 10 ) { 

        sum += iteration;
        iteration++;
    }

    cout << "Sum of First Natural Number :  " << sum ;
}