#include <stdio.h>


void swap(int *a, int *b){      // a가르키는값, b가 가르키는 값

    int tmp = *a;
    *b = tmp;
    *a = *b;
}

void pointer() {
    int  num  = 10;   // 일반 변수
    int *pNum = &num; // num의 주소를 저장

    printf("1) num   = %d\n",  num);
    printf("2) *pNum = %d\n", *pNum);  // 주소를 따라가 값 읽기

    *pNum = 20;       // 주소를 따라가 값 쓰기(수정)
    printf("3) num   = %d\n",  num);   // num이 실제로 바뀜
}


int main(){

    int x = 4;
    int *p = &x;

    printf("%d", *p);
    

    return 0;
}

