#include <stdio.h>

int main(){

    int num[10];
    int min, max;
    int sum = 0;


    // 숫자를 10개 입력을 받는다. 
    for(int i = 0; i < 10; i++){
        printf("%d번째 숫자를 입력하세요: \n", i + 1);
        scanf("%d", &num[i]);

        sum = sum + num[i];
    }   

    // 큰 수와 작은수를 구한다. 
    for(int i = 0; i < 10; i++){

        // 큰 수
        if(num[i] > max){
            max = num[i];
        } 

        // 작은 수
        else if(min > num[i]){
            min = num[i];
        }
    }
    
    // 평균값을 구한다. 
    float avr = sum / 10.0;
    printf("min is %d\n", min);
    printf("max is %d\n", max);
    printf("avr is %f\n", avr);


}