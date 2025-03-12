#include <iostream>
using namespace std;

#define ARRAY_SIZE 5  

int stack[ARRAY_SIZE];
int top = -1;

void push(int value) {
    if (top == ARRAY_SIZE - 1) {
        cout << "Stack Overflow! Cannot push " << value << endl;
        return;
    }
    top++;
    stack[top] = value;
    cout << value << " pushed to stack." << endl;
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow! Cannot pop from an empty stack." << endl;
        return;
    }
    cout << stack[top] << " popped from stack." << endl;
    top--;
}

int peek() {
    if (top == -1) {
        cout << "Stack is empty!" << endl;
        return -1;
    }
    return stack[top];
}

bool isEmpty() {
    return top == -1;
}

void display() {
    if (isEmpty()) {
        cout << "Stack is empty!" << endl;
        return;
    }
    cout << "Stack elements: ";
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
    }
    cout << endl;
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(55);
    // push(60);
    
    display();  
    
    cout << "Top element: " << peek() << endl;
    
    pop();
    display();

    return 0;
}