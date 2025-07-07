#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10



// 랜덤으로 10개의 숫자를 내야함
// 1부터 10까지
// 근데 겹치면 안됨.
int main(void) {

    int nums[N];

    // 시드 초기화
    srand(time(0));

    // 초기화 한다.
    for(int i = 0; i < N; i++){
        nums[i] = i + 1; // nums는 1부터 10까지가 된다. 
    } 

    // 알고리듬으로 셔플한다. 랜덤이다. 
    for(int i = N - 1; i  > 0; i--){ // 9번 반복인데 줄어든다. 9부터 1까지 
        int j = rand() % (i + 1); // 그러면 만약에 i가 4라면 1부터 5까지의 숫자가 나온다. 

                                // 중복없는 배열을 무작위로 재배치 하는 것이기 때문이다. 
        int tmp = nums[i];      // 선택된 요소를 맨 뒤로 보낸다. 
        nums[i] = nums[j];
        nums[j] = tmp;
    }

    // 이후 결과를 출력한다.
    for(int i = 0; i < N; i++){
        printf("%d\n", nums[i]);
    } 

    return 0;
}
