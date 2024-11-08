// Write a program to determines the factorial of any integer number 
// Note: Use While Loop
// Personal Rated Difficulty For Newbies: Very Easy

// TASK EXPLAINATION/Steps
// We will take input of the number of who's we want to find factorial of, for example 10
// We will define a factorial variable with integer type which we will update
// We need to create a while loop that will keep adding everything inside factorial, increasing it's value as we proceed
// At the end, we will print the factorial variable as an output

#include <stdio.h>
int main() {

    int i = 1; // initializing and declaring the variable i that we will use for iteration of while loop
    int factorial = 1;  // initializing and declaring the variable factorial where we will update the value inside the while loop
    int N; 
    printf("Enter the number you want to find factorial of: "); // giving user prompt to enter the number
    scanf("%d", &N); // scanf to take input and store in variable N

    // applying the condition where till the number entered by the user is still greater than i
    while (N>=i)
    {

        factorial *= i; // If you know how we find factorial in math, let's just keep multiplying the number with interation
        // the value of factorial will keep increasing as we proceed
        printf("Multiplication result after %d is multiplied is %d\n", i ,factorial); 
        i++; // increasing the value of i by 1 with each iteration

    }

    printf("The factorial of %d is %d", N, factorial);
    return 0;

}