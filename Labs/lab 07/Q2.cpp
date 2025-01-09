#include <iostream>

using namespace std;

int main(){

    int n, factorial = 1;
    int i = 1;

    cout << "Enter Number for Factorial: " << endl;
    cin >> n;

    while (i <= n){
        
        factorial = factorial * i;
        cout << "Factorial After " << i << " Iteration: " << factorial << endl;
        i++;
    }
    cout << "Factorial is of " << n << " is : "<< factorial;
}


// #include <iostream>
// using namespace std;

// int main()
// {
//     int input;

//     cout << "Enter a number to find its factorial: ";
//     cin >> input;

//     int factorial = 1;

//     int i = input; // Keep a separate variable for iteration
//     while (i > 1)  // Continue until i reaches 1
//     { 
//         cout << "Iteration Number Run: " << i << endl;
//         cout << "Factorial After Iteration " << factorial << endl;
//         factorial *= i;
//         i--;
//     }

//     cout << "Factorial of " << input << " is: " << factorial << endl;

//     return 0;
// }
