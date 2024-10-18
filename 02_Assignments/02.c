// Find the greatest of 3 numbers entered by the user

#include <stdio.h>

int main() {

    int a, b, c; // Initialising variable a b and c with type integer
    
    // Taking user input using scanf 
    // printf is used to provide prompt
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);
    
    printf("Enter the third number: ");
    scanf("%d", &c);

    // if else ladder to get the correct output
    
    // && operator means "and", will show result if both conditions are true
    if (a > b && a > c) // incase a is the greatest number then
    {
        printf("The greatest number is a with value %d",a);
    }


    else if (b > a && b> c) // incase a is the greatest numebr then
    {
        printf("The greatest number is b with value of %d", b);
    }
    else if (c> a && c> b) // incase c is the greatest number then
    {
        printf("The greatest number is c with value of %d", c);
    }

    // incanse none of the above conditions are satisfied it means that either of the 2 numebrs are equal
    else {
        printf("Any of the two entered number are equal");
    }
    
    return 0;
}