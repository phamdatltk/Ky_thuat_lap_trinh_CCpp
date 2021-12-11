#include<iostream>
using namespace std;

template <class T>
T sum(T *arr, int n){
    T s = 0;
    for(int i = 0; i < n; i++){
        s += arr[i];
    }

    return s;
}


int main(){

    int arr[] = {0,3,4,5,7};
    cout << sum(arr, 5) << endl;

    float a[] = {1.2, 1.6, 6.5};
    cout << sum(a, 3) << endl;

    return 0;
}