#include<iostream>
using namespace std;

void swap(double &a, double &b){
	double c = a;
	a = b;
	b = c;
}

void sort(double *arr, int size, bool (*compare)(double, double)){
	for (int i = 0; i < size; i++){
		for(int j = i + 1; j < size; j++){
			if(compare(arr[i], arr[j]) == true){
				swap(arr[i], arr[j]);
			}
		}
	}
}

bool compare_less(double a, double b){
	return a < b;
}

bool compare_more(double a, double b){
	return a > b;
}

int main(){
	
	double a[100] = {1, 2, 3, 4 ,6 , 5};
	int n = 6;
	sort(a, n, compare_less);
	for(int i = 0; i < n ; i++){
		cout << a[i] << "  ";
	}
	cout << endl;

	double b[100] = {1, 2, 6, 3 ,5 , 4};
	int m = 6;
	sort(b, m, compare_more);
	for(int i = 0; i < n ; i++){
		cout << b[i] << "  ";
	}
	cout << endl;

	return 0;
}