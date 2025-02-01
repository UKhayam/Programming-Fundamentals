#include <iostream>

using namespace std;

int main()
{

    int x, range;
    cout << "******************Multiplication Table Generator******************";
    cout << endl;
    cout << endl;
    cout << "Enter Number for Multiplication" << endl;
    cin >> x;

    while (x < 0 || x > 30)
    {
        if (x < 0)
        {
            cout << "You Enter Negative " << endl;
            cout << "Enter Positive Number" << endl;
        }
        else
        {
            cout << "Number is Greater than 30 " << endl;
            cout << "Enter from 1 to 30" << endl;
        }
        cin >> x;
    }

    cout << "Enter Range for Multiplication Table " << endl;
    cin >> range;

    for (int i = 1; i <= range; i++)
    {

        cout << "Multiplication: " << x << "x" << i << " = " << x * i << endl;
    }
    system("pause");
}
