#include<iostream>
#include "list.h"
using namespace std;

int main(){
    List <int> a;
    cout << a.length() << endl;

    for(int i = 1; i < 10; i++){
        a.push_back(i);
    }



    for(int i = 0;i < 9;i ++){
        cout << a.pop_front() << "    ";
    }

    cout << a.length() << endl;
}