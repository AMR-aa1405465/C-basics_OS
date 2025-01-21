#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

void main(){

    // 0. ( 1 state if condition)
    int a = 10;
    if(a > 5){
        printf("a is greater than 5\n");
    }

    // --------------------------------------------------------------------- //
    // 1. (2 state if condition)
    int a = 10;
    if(a > 5){
        printf("a is greater than 5\n");
    }else{
        printf("a is less than 5\n");
    }

    // --------------------------------------------------------------------- //

    // 2. (3 state if condition)
    int b = 10;
    if(b > 5){
        printf("b is greater than 5\n");
    }else if(b == 5){
        printf("b is equal to 5\n");
    }else{
        printf("b is less than 5\n");
    }

    // 3. (nested if condition)
    int c = 10;
    if(c > 5){
        printf("c is greater than 5\n");
        if(c == 10){
            printf("c is equal to 10\n");
        }
        if(c < 10){
            printf("c is less than 10\n");
        }
    }


}   