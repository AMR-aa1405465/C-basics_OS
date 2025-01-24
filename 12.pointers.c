#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

// in this file, we will learn about pointers
// Pointers are variables that store the address of another variable

void swap(int* a, int* b);

int main(){

    int a = 10;
    int* ptr = &a; // ptr is a pointer to the address of a
    printf("The value of a is %d\n", a);
    printf("The address of a is %p\n", ptr);

    // we can also access the value of a through the pointer
    printf("The value of a is %d\n", *ptr);

    // we can also change the value of a through the pointer
    *ptr = 20; //mem[0x4000] = 20 
    printf("The value of a is %d\n", a);

    int arr[3] = {1,2,3};
    int *pr = arr; 
    // printf("%d",*(pr+2))
    char *str = "hello";

    
    
    printf("Swapping two variables using pointers.");
    int x = 10 ; 
    int y = 15 ; 
    printf("Before swapping, x=%d y=%d\n",x,y);
    
    swap(&x,&y);
    
    printf("After swapping, x=%d y=%d\n",x,y);
    
return 0;
}   

void swap(int* a, int* b){
    int temp = *a ; 
    *a = *b ; 
    *b = temp; 
}