#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>


void main(){

    // 1. String declaration types.
    char str1[] = "Hello"; // use it when you know the size of the string   
    char str2[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // use it when you don't know the size of the string
    char str3[6] = "Hello"; // use it when you know the size of the string


    // 2. How to know the length of a string
    int len = strlen(str1);
    printf("Length of str1: %d\n", len);
    int len2 = sizeof(str2)-1;
    printf("Length of str2: %d\n", len2);


    // 3. How to concatenate two strings
    char str4[] = "Hello";
    char str5[] = "World";
    strcat(str4, str5);
    printf("Concatenated string: %s\n", str4);


    // 4. How to compare two strings
    char str6[] = "Hello";
    char str7[] = "Hello";
    int result = strcmp(str6, str7);
    if(result == 0){
        printf("Strings are equal\n");
    }else{
        printf("Strings are not equal\n");
    }


   // 5. Convert string to int 
   char str8[] = "123";
   int num = atoi(str8);
   printf("Number: %d\n", num);


   // 6. Convert int to string
   int num2 = 123;
   char str9[10];
   sprintf(str9, "%d", num2);
   printf("String: %s\n", str9);    



   // 7. How to read a string from the user 
   // if the string does not have spaces, you can use scanf
   char str10[100];
   scanf("%s", str10);
   printf("String: %s\n", str10);

   // if the string has spaces, you can use fgets
   char str11[100];
   fgets(str11, sizeof(str11), stdin);
   printf("String: %s\n", str11);

}