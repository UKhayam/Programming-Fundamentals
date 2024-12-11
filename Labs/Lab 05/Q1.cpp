#include <iostream>

using namespace std;

int main(){

    int x;
    cout << "Enter a number \n";
    cin>> x;

    if(x == 100){
        cout << "Number is equal to 100";
    }
    else if(x > 100){
        cout << "The number is greater than 100";
    }
    else{
        cout << "The number is less than 100";
    }
}

