#include <stdio.h>
#include <time.h>
#include <stdlib.h>


#define N 10

// 스왑 함수임
void swap_int(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

// 버블 정렬 알고리듬
void bubble_sort(int keys[], int vals[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n -i-1; j++){
            if (keys[j] > keys[j+1]) {
                swap_int(&keys[j], &keys[j+1]);
                swap_int(&vals[j], &vals[j+1]);
        }
    }
}

}
int main(){

    int index[N];
    int nums[N];
    srand(time(0));
    
    // 1부터 10 사이의 랜덤 수들을 랜덤으로 배정한다. 
    // 초기화 한다. 
    for(int i = 0; i < N; i++){
        nums[i] = i + 1;
        index[i] = rand() % 10 - 1;
    }

    bubble_sort(index, nums, N);

    for(int i = 0; i < 10; i++){
        printf("%d", nums[i]);
        putchar('\n');
    }


    return 0;
}