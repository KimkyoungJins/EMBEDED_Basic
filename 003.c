#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRIAL 1000000

// 경험적 확률을 구하기 위해서는 발생 횟수 / 전체 시도 횟수
int main(){
    
    int index[13] = {0}; // 0으로 초기화 한다. 
    int dice[2];
    int sum = 0;
    double percent_per[13]; //각자의 확률을 계산해서 


    // 랜덤 시드를 초기화 한다. 
    srand(time(0));

    // 주사위 2개를 던져서 그 값을 합한다.
    for(int i = 0; i < TRIAL; i++){
        dice[0] = rand() % 6 + 1;
        dice[1] = rand() % 6 + 1;

        sum = dice[0] + dice[1];

        //그리고 각자의 값이 몇번 나왔는지 기록한다.  
        index[sum]++;
    }

    // for(int i = 0; i < 13; i++){
    //     printf("%2d은 %d번 나옴\n", i, index[i]);
    // }


    // 그러면 각자의 숫자가 몇 번나왔는지 알 수 있는데
    // 그 값의 확률을 계산한다. 
    for(int i = 2; i < 13; i++){
        percent_per[i] = (double)index[i] / TRIAL;  // 발생횟수/ 전체 실행 횟수
        printf("%2d가 나올 확률 = %f\n", i,percent_per[i]);
    }

    // 몇 번 나왔는지와 백분율을 출력하기 위해서는 
       for(int i = 2; i < 13; i++){
        percent_per[i] = (double)index[i] / TRIAL;  // 발생횟수/ 전체 실행 횟수
        printf("%2d은 %6d번 나옴 그리고 백분율은 %.2f임\n", i, index[i], percent_per[i] * 100.0);
    }

    return 0;
}