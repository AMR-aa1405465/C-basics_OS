#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>


void main(){

    // 1. For loop
    int i; 
    for(i = 0; i < 10; i++){
        printf("i = %d\n", i);
    }

    // for(; ;){ // for true
    //     printf("i = %d\n", i);
    // }



    // 2. While loop
    i = 0;
    while(i < 10){
        printf("i = %d\n", i);
        i++;
    }

    // while(1){ //while true 
    //     printf("i = %d\n", i);
    //     i++;
    // }


    // 3. Do while loop
    i = 0;
    do{
        printf("i = %d\n", i);
        i++;
    }while(i < 10);

    

}