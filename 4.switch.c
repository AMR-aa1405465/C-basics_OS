#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

// in this file, we will learn how to use switch statements
void main(){

// switch statements are used to replace multiple if-else statements

// switch for integers 
int a = 10;
switch(a){
    case 1:
        printf("a is 1\n");
        break;
    case 2:
        printf("a is 2\n");
        break;
    default:
        printf("a is not 1 or 2\n");
        break;
}


}