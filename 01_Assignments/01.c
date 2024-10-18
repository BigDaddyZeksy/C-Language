// Take 2 numbers as input from the user and perform addition, subtraction, multiplication & division on them and print them in the terminal. 
#include <stdio.h>

int main() {
    int numberA, numberB; // Declaring 2 variables in integer types
    printf("Enter the first number: "); // prompt for user to enter first number
    scanf("%d", &numberA); // scanf function to storage the value in numberA, %d is used to tell program the datatype of variable
    
    printf("Enter the second number: "); // prompt for user to enter first number
    scanf("%d", &numberB); // scanf function to storage the value in numberB, %d is used to tell program the datatype of variable
    
    int sum, difference, product, quotient; // Declaring 4 more variables to store the results

    sum = numberA + numberB; // Arthematic sum of two numbers
    difference = numberA - numberB; // Arthematic difference of two numbers
    product = numberA * numberB; // Arthematic product of two numbers
    quotient = numberA/numberB;  // Arthematic divison of two numbers

    // printing them all
    printf("The sum of %d and %d is: %d\n", numberA, numberB, sum); 
    printf("The difference of %d and %d is: %d\n", numberA, numberB, difference); 
    printf("The product of %d and %d is: %d\n", numberA, numberB, product); 
    printf("The quotient if %d is divided by %d is: %d\n", numberA, numberB, quotient); 

    return 0;
}