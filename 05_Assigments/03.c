// Write a program that determines if the given number is prime number or not
// Personal Rated Difficulty For Newbies: Mid - Hard

// TASK EXPLAINATION/Steps
// We will take input of the number from the user which we want to determine is prime or not
// We will run a while loop and try dividing the number with each iteration
// If the number gets perfectly divided. It is prime
// To determine that it got perfectly divided by a number, we will define a boolian type variable prime as false, inside where it gets divided, we will make it true
// We will use conditional statements both inside and outside the loop
// Inside the loop to check if the number gets divided or not
// Outside the loop depending on the value of variable prime, if it's false then print not prime otherwise call it prime

// Shit's complex but the code would maybe make it simple

// Well actually, instead of using bool datatype, let's just keep it 1 or 0
// 0 means false, 1 means true
#include <stdio.h>

int main () {
    int prime = 0; // value of prime is set to 0, if it becomes 1 after looping then consider the number prime
    int interation = 2; // we start iterating from 2, because only then we can decide for prime. Not taking 1 because every number is divisible by 1 lol

    int Number; 
    printf("Enter the number you want to find is prime or not: "); // giving user prompt to enter the number
    scanf("%d", &Number); // scanf to take input and store in variable Number

    while (Number>interation)
    {
        /* code */

        if (Number%interation==0) {
            prime = 1; // setting the value of prime to 1 if the number gets divided perfectly
        }

        interation ++; // increasing the iteration by 1 to continue the loop
    }
    
    // conditional statements to tell if it's prime or not
    

    if (prime==0){
        printf("The number %d is a prime number", Number);
        // if the value of prime variable is still set to 0 then it's prime

    }
    else {
        printf("The number %d is NOT a prime number", Number);
        // if the value of prime variable is still NOT set to 0 then it's NOT prime

    }
    return 0;
}