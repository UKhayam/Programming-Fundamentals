#include <iostream>
using namespace std;

int main()
{

    int num1, num2;
    int input;

    cout << "*****************************" << endl;
    cout << "Enter '+' for Addition" << endl;
    cout << "Enter '-' for Substraction" << endl;
    cout << "Enter '*' for Multiplication" << endl;
    cout << "Enter '/' for Division" << endl;
    cout << "*****************************" << endl;

    cin >> input;

    cout << "Enter Number 1: " << endl;
    cin >> num1;
    cout << endl;
    cout << "Enter Number 2: " << endl;
    cin >> num2;

    switch (input)
    {
    case '+':
        cout << "Addition Of the Provided Numbers is: " << num1 + num2;
        break;
    case '-':
        cout << "Substraction Of the Provided Numbers is: " << num1 - num2;
        break;
    case '*':
        cout << "Multiplication Of the Provided Numbers is: " << num1 + num2;
        break;
    case '/':
        cout << "Division Of the Provided Numbers is: " << num1 / num2;
        break;
    default:
        cout << "You have entered valid input";
        break;
    }
}