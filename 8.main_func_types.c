#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>


// in C, you can define the main functions in 2 ways: (with arguments or without arguments)
//Notice that Only one main function can be defined in a file.


// without arguments
// int main(){

// }

// ------------------------------------------------------------------------------------------------//
// with arguments
int main(int argc, char *argv[]){

// argc is the number of arguments
// argv is the array of arguments (array of strings) 

// to print the arguments
for(int i = 0; i < argc; i++){
    printf("Argument %d: %s\n", i, argv[i]);
}

// assume that my file was ran like ./main_func_types.c 1 2 3
// the output will be:
// Argument 0: ./main_func_types.c
// Argument 1: 1
// Argument 2: 2
// Argument 3: 3

// if you want to convert the 1,2,3 to int, you can use atoi
int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);
int num3 = atoi(argv[3]);


}
