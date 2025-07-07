#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main(void) {
    int nums[N];
    
    // 1) 배열 초기화: 1, 2, ..., 10
    for (int i = 0; i < N; i++) {
        nums[i] = i + 1;
    }

    // 2) 난수 시드 설정: 시간에 따라 매번 다른 순서를 생성
    srand((unsigned)time(NULL));

    // 3) Fisher–Yates 셔플 (in-place)
    for (int i = N - 1; i > 0; i--) {
        int j = rand() % (i + 1);  // 0 <= j <= i
        // swap nums[i] and nums[j]
        int tmp   = nums[i];
        nums[i]   = nums[j];
        nums[j]   = tmp;
    }

    // 4) 결과 출력
    printf("랜덤으로 섞인 1~10 숫자:\n");
    for (int i = 0; i < N; i++) {
        printf("%2d ", nums[i]);
    }
    printf("\n");

    return 0;
}
