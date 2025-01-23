#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main() { 
    
//random number 0-10 => rand()%11 + 1 => [0,1,2,3,....9..10]// 1-11

 // 1. How to generate random numbers in C 
 int randomNumber = rand() % 100; // Ouput is [0-99] ONLY, if you want 1-100, you need to add 1 to the result.
 printf("Random number: %d\n", randomNumber);


 // 1.1 Generate random numbers in a range (1-100)
 int randomNumber2 = rand() % 100 + 1; // Ouput is [1-100] 
 printf("Random number: %d\n", randomNumber2);


// 2. Generated random numbers always the same, to fix this we need to seed the random number generator
srand(time(NULL));
int randomNumber3 = rand() % 100 + 1; // Ouput is 1-100 
printf("Random number: %d\n", randomNumber3);

return 0;

}