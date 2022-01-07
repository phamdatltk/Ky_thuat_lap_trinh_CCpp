#include<stdio.h>

int ham(int *a){
    *a = 2;
    a++;
}

int main(){

    int *a;
    printf("Truoc : %ls", a);
    ham(a);
    printf("Sau : %ls", a);
    ham(a);

    return 0;
}