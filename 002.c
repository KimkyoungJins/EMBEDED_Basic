#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    // 랜덤하게 30개 만들어서 배열에 저장한다. 
    int dice[30];

    // 1부터 6사이에 까지의 수를 랜덤하게 뽑아내야 한다. 
    int rand_min = 1;
    int rand_max = 6;

    srand(time(0)); // 랜덤 시드를 초기화 한다. 같은 패턴을 위해서
    
    for(int i = 0; i < 30; i ++){
        dice[i] =  rand() % rand_max + rand_min; // 1부터 6사이에 수를 만들기 위해서
        printf("%2d", dice[i]); // 번호를 2칸 폭으로 좌측 정렬

        if(((i+1) % 10) == 0){
            // printf("\n");

            putchar("\n");
        }
    
    }

    



    return 0;
}