
#include <iostream>

using namespace std;

void printArray(string arr[],int size){

    for (int i = 0; i < size; i++){
        if (i != 0){
            cout << ", ";
        }
        cout << arr[i];
    }
}

int main(){

    int size = 4;
    cout << "Old Array: " << endl;
    string arr[size] = {"ALi", "Hasnain", "Umer", "Khizer"};
    cout << "******************" << endl;
    printArray(arr, size);
    cout << endl;
    cout << "******************" << endl;

    for (int i = 0; i < 4; i++){
        cout << "Enter Name " << (i + 1) << ": ";
        cin >> arr[i];
    }

    cout << endl;

    cout << "New Array:" << endl;
    cout << "******************" << endl;
    printArray(arr, size);
    cout << endl;
    cout << "******************" << endl;
}