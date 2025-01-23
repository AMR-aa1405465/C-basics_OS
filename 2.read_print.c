#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

// in this file, we will learn how to read and print data in C

void main(){

    // 1. How to print data
    printf("Hello, World!\n");

    // 2. How to read data
    // 2.1 read int, float, double, char, the same way
    printf("Please enter an int:");
    int a;
    scanf("%d", &a); // %d is the format specifier for int
    printf("You entered %d\n",a);

    //read float
    printf("Please enter a float:");
    float b;
    scanf("%f", &b); // %f is the format specifier for float
    printf("You entered: %f\n", b);

    //read double
    printf("Please enter a double:");
    double c;
    scanf("%lf", &c);
    printf("You entered: %lf\n", c);

    //read a character
    printf("Please enter a character:");
    char d;
    scanf(" %c", &d); // %c is the format specifier for char
    printf("You entered: %c\n", d);

    // 2.2 read string without any spaces. 
    printf("Please enter a string:");
    char str[100];
    scanf("%s", str); 
    printf("You entered: %s\n", str);

    while ((getchar()) != '\n'); // Clear any leftover input

    // 2.3 read string with spaces 
    printf("Please enter a string with spaces:");
    char str2[100]; //string/buffer
    fgets(str2, sizeof(str2), stdin);
    printf("You entered: %s\n", str2);


}