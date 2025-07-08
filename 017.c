#include <stdio.h>


int add3(int *p){

    int sum = 0;

    for(int i = 0; i < 3; i++){
        sum += *(p+i);
        return sum;
    }
}


int main(){

    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int *p;
    *p = a;

    for(int i = 0; i < 10; i++){
        *(p+i) = *(p+i) * 10;
    }


    return 0;
}