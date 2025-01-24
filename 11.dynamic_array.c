#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

// in this file, we will learn how to create a dynamic array
// a dynamic array is an array that can grow or shrink at runtime
// we use it when we don't know the size of the array at the time of declaration
// such as in the threading and multiprocessing scenarios. 


int* dynArray; // Step1: first define the array

void main(){

// Step2: read the size of the array
printf("Enter the size of the array: ");
int size;
scanf("%d", &size);

// Step3: allocate memory for the array
dynArray = (int*) malloc(sizeof(int)*size); // allocate memory for the array



}   