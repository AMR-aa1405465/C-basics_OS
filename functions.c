#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

//prototype
int add(int a, int b);


//this is the second way to define a function
int add2(int a, int b){
    return a + b;
}



int main(){

/*
There are 2 ways to define a function in C:
1. define the function before the main function
2. define the function after the main function but add a prototype before the main function
*/

int result = add(1, 2);
printf("Result: %d\n", result);

int result2 = add2(1, 2);
printf("Result2: %d\n", result2);

return 0;
}

//this is the first way to define a function
int add(int a, int b){
return a + b;
}

