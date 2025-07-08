#include <stdio.h>

int main(){


    int a = 10;
    int b = 20;

    int c[5] = {1, 2, 3, 4, 5};


    int *pa = &a;
    int *pb = &b;
    int *pc;

    // pa = a
    // pb = b


    // pc = 
    pc = c + 2;
    printf("%p %d \n", pc, *pc);


    return 0;
}