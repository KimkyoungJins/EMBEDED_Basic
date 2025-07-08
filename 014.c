#include <stdio.h>
#include <string.h>


int main(){


    char name1[][20] = {"Kang", "Cho", "Kim"};
    char name2[][20] = {{'k', 'a', 'n', 'g'}, {'c', 'h', 'o'}, {'k', 'i', 'm'}};


    for(int i = 0; i < 3; i++){
        printf("%14s", name1[i]);
        printf("\n");
    }

        for(int i = 0; i < 3; i++){
        printf("%14s", name2[i]);
        printf("\n");
    }

    strcpy(name1[0], "steve");
    strcpy(name1[1], "bill");
    strcpy(name1[2], "denis");

    for(int i = 0; i < 3; i++){
        printf("%14s", name1[i]);
        printf("\n");
    }



    return 0;
}