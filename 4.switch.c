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


//More recently, switch statements can be used for strings
printf("Enter a string: ");
char str[100];
scanf("%s", str);
switch(str){
    case "hello":
        printf("the user input is hello\n");
        break;
    case "world":
        printf("the user input is world\n");
        break;
    default:
        printf("the user input is not hello or world\n");
        break;
}



}