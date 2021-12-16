#include<iostream>
#include "queue.h"
using namespace std;

int main(){
    Queue <int> a;
    for(int i = 0; i < 10; i++){
        a.EnQueue(i);
    }
    cout << a.Front() << endl;

    while(!a.IsEmpty()){
        cout << a.DeQueue() << "   " ;
    }
}