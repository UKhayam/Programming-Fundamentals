#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "Enter Input" << endl;
    cin >> input;
    cout << "*****" << endl;
    for (int i = 1; i <= input; i++)
    {
        for ( int j = 1; j <= i; j++){
            cout << i ;
        }
        cout << endl;
    }
    system("pause");
}

