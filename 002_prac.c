#include <stdio.h>
#include <stdlib.h> // rand, srand
#include <time.h>

// rand() 함수는 0부터 엄청 큰 수 사이에 정수를 랜덤으로 반환
// srand() 난수 시드인데 rand()의 시작점을 지정한다. 
// time() 시간을 지정한다. 
// 랜덤 시드 값이 달라야지, 랜덤값이 다른 모습, 다른 패턴으로 나타난다. 


int main(){

    srand(time(0)); // srand 함수를 통하여서 시드를 초기화 해야하는데 그 파라미터는 Time(0)이다. 



}


