#include <stdio.h>



int main(){

    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;
    int sum = 0;
    
    for(int i = 0; i < 5; i++){
        sum = sum + *(p + i);
    }

    printf("%d", sum);

    return 0;
}