#include <stdio.h>


void swap(int x, int y){
    int tmp = x;

    x = y;
    y = tmp;
}

void swap2(int *px, int *py){
    int tmp;

    tmp = *px;
    *px = *py;
    *py = *px;
    
}

int main(){

    int x = 3;
    int y = 4;

    swap(3, 4);
    printf("call swap %d, %d", x, y);

    swap2(&x, &y);
    printf("after calling swapping, %d, %d"  x, y);

    return 0;
}