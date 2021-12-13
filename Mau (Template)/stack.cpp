#include<iostream>
#include "stack.h"
using namespace std;

typedef Stack<int> IntStack;

int main(){

    IntStack si(20);
    for(int i = 0; i < 10; i++){
        si.push(i);
    }

    cout << "Stack of intenger: " << endl;
    for(int i = 0; i < 10; i++){
        cout << si.pop() << "  ";
    }
    cout << endl;
    return 0;
}