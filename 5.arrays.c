#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>


void main(){

 // an array has only 1 data type. 
 
 // 1. How to declare an array
 int arr[5] = {1, 2, 3, 4, 5}; // int array 
 float arr2[5] = {1.1, 2.2, 3.3, 4.4, 5.5}; // float array
 char arr3[5] = {'a', 'b', 'c', 'd', 'e'}; // char array == string also 


 // 2. How to access an array element
 int a = arr[0];
 printf("a = %d\n", a);

 // 3. How to modify an array element
 arr[0] += 10 ;
 printf("arr[0] = %d\n", arr[0]);


 // 4. How to know the size of an array
 int arraySize = sizeof(arr)/sizeof(arr[0]);
 printf("Size of arr: %d\n", arraySize);

 // Once you know its size, you can loop through the array
 for(int i = 0; i < arraySize; i++){
    printf("arr[%d] = %d\n", i, arr[i]);
 }
 


}
