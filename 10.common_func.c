#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// fibonacci sequence
int fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

// factorial
int factorial(int n){
    if(n == 0) return 1;
    return n * factorial(n-1);
}

// prime number
int isPrime(int n){
    if(n <= 1) return 0;
    //use sqrt to reduce the number of iterations
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}


// palindrome
int isPalindrome(int n){
    int original = n;
    int reversed = 0;
    while(n > 0){
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}


// reverse a string
char* reverseString(char* str){
    int len = strlen(str);
    char* reversed = (char*)malloc(len+1);
    for(int i = 0; i < len; i++){
        reversed[i] = str[len-i-1];
    }
    reversed[len] = '\0';
    return reversed;
}

// is even
int isEven(int n){
    return n % 2 == 0;
}

// is odd
int isOdd(int n){
    return n % 2 != 0;
}

// is divisible by n 
int isDivisibleByN(int n, int divisor){
    return n % divisor == 0;
}



int main(){

 // try all the functions here
 int fib = fibonacci(10);
 printf("Fibonacci of 10: %d\n", fib);

 int fact = factorial(5);
 printf("Factorial of 5: %d\n", fact);

 int prime = isPrime(17);
 printf("Is 17 a prime number? %d\n", prime);

 int palindrome = isPalindrome(12321);
 printf("Is 12321 a palindrome? %d\n", palindrome);

 char str[] = "Hello";
 char* reversed = reverseString(str);
 printf("Reversed string: %s\n", reversed);

 int even = isEven(10);
 printf("Is 10 even? %d\n", even);

 int odd = isOdd(11);
 printf("Is 11 odd? %d\n", odd);

 int divisible = isDivisibleByN(10, 3);
 printf("Is 10 divisible by 3? %d\n", divisible);

return 0;
}