#include <stdio.h>
#include <string.h>



// 문자열 처리
int main(){

    char s[10] = {'a', 'b', 'c', 'd', 'e'};
    char t[] = {'a', 'b', 'c', 'd', 'e', '\0'};
    char v[]= {"안녕하세요"};
    char u[] = "abcde";

    printf("%lu\n", sizeof(s));
    printf("%lu\n", sizeof(t));
    printf("%lu\n", sizeof(v));
    printf("%lu\n", sizeof(u));



    return 0;
}