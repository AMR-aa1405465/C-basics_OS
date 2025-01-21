#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

// in this file, we will learn about pointers
// Pointers are variables that store the address of another variable
// they are used to directly access the memory address of a variable
// they are declared using the * symbol.
// they are used to pass variables to functions by reference.
// They have many uses & we will see them in many contexts.
void main(){

    int a = 10;
    int* ptr = &a; // ptr is a pointer to the address of a
    printf("The value of a is %d\n", a);
    printf("The address of a is %p\n", ptr);

    // we can also access the value of a through the pointer
    printf("The value of a is %d\n", *ptr);

    // we can also change the value of a through the pointer
    *ptr = 20;
    printf("The value of a is %d\n", a);



}   