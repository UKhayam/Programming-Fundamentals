#include <iostream>

using namespace std;

int main()
{

    int num;
    cout << "Enter a Number " << endl;
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "The number is Even";
    }
    else
    {
        cout << "The number is Odd";
    }
}