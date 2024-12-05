#include <iostream>

using namespace std;

int main(){

    int x;

    cout << "Enter a number" << endl;
    cin >> x;

    if(x > 50){
        cout << "The number is greater than 50";
    }
    else if(x == 50){
        cout << "The number is equal than 50";
    }
    else{
        cout << "The number is less than 50";
    }
}