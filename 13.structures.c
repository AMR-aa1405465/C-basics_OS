#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

// in this file, we will learn about structures
// It's like a class in OOP.

struct Person{
    int id;
    char name[100];
    int age;
};

void main(){

    // create a person
    struct Person p1;

    // assign values to the person
    p1.id = 1;
    strcpy(p1.name, "Amr");
    p1.age = 20;

    // print the person
    printf("The person's name is %s\n", p1.name);
    printf("The person's age is %d\n", p1.age);


    //Another way to create a person
    struct Person p2 = {2, "Ali", 21};
    printf("The person's name is %s\n", p2.name);
    printf("The person's age is %d\n", p2.age);

    // we can also create an array of people/objects 
    struct Person people[2];
    for(int i = 0; i < 2; i++){
         // create a dummy person
         struct Person p;

         // read the person's data
         printf("Enter the person's id: ");
         scanf("%d", &p.id);
         printf("Enter the person's name: ");
         scanf("%s", p.name);
         printf("Enter the person's age: ");
         scanf("%d", &p.age);

         // add the person to the array
         people[i] = p;

        
    }

    //loop through the array and print the people
    for(int i = 0; i < 2; i++){
        printf("The person's name is %s\n", people[i].name);
        printf("The person's age is %d\n", people[i].age);
    }
    
}   