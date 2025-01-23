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

void plus3(int val){
    val+=3;
}

void plus3R(int *val){
    *val+=3;
}



int main(){
int firstVar,secondVar;
/*
There are 2 ways to define a function in C:
1. define the function before the main function
2. define the function after the main function but add a prototype before the main function
*/

int result = add(1, 2);
printf("Result: %d\n", result);

int result2 = add2(1, 2);
printf("Result2: %d\n", result2);

//pass by value vs pass by reference 
scanf("%d",&firstVar);
scanf("%d",&secondVar);

//pass by value.
plus3(firstVar);
printf("firstVar = %d\n",firstVar);

//pass by reference.
plus3R(&secondVar);
printf("firstVar = %d\n",secondVar);


return 0;
}//end of the main function.



//this is the first way to define a function
int add(int a, int b){
return a + b;
}

