#include <stdio.h>


// 열거형은 서로 관련 있는 상수들의 집합을 정의 한 것이다.
// 숫자에 특정한 명칭을 붙여주어 의미를 쉽게 이해할 수 있게 하는 용도이다. 


typedef enum{

    AMERICANO = 1000,
    LATTE = 2000,
    MOCHA = 3000,
    ESPRESSO = 2500

} Coffee;

const char *Coffee_name[] = {
    "Americano",
    "Latte",
    "Mocha",
    "Espresso"
};


int main(){


    return 0;
}