#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

// 간단한 swap 함수
void swap_int(int *a, int *b) {
    int t = *a; *a = *b; *b = t;
}

// 버블 정렬(가독성 위주)
void bubble_sort(int keys[], int vals[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (keys[j] > keys[j+1]) {
                swap_int(&keys[j], &keys[j+1]);
                swap_int(&vals[j], &vals[j+1]);
            }
        }
    }
}

int main(void) {
    int nums[N], keys[N];
    srand((unsigned)time(NULL));

    // 초기화 & 키 생성
    for (int i = 0; i < N; i++) {
        nums[i] = i + 1;
        keys[i] = rand();
    }

    // 키 기준으로 두 배열 동시 정렬
    bubble_sort(keys, nums, N);

    // 앞 10개 출력
    printf("정렬 셔플 결과: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    return 0;
}
