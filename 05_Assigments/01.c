// Write a program that determines the sum of N natural number
// Note: Use For Loop
// Personally Rated Difficulty For Newbies : Very Easy

// TASK EXPLAINATION/Steps
// We will take input of the number till which we want to sum, for example 10
// We will define a sum variable with integer type where we will keep the sum of numbers
// We need to create a for loop that will keep adding everything inside sum
// At the end, we will print the sum variable as an output

#include <stdio.h>

int main() {

    int sum = 0; // Taking the variable sum where for loop will add numbers
    int N; 
    printf("Enter the number till you want to sum: "); // giving user prompt to enter the number
    scanf("%d", &N); // scanf to take input and store in variable N
    
    // creating a for loop where i starts of as 1, the loop runs till the value of i is greater than value entered by the user
    for (int i=1; i<=N; i++) {

        sum += i; // Adding the value of i into the variable sum
        printf("Addition result after %d is added is %d\n", i ,sum); 
        // this will keep increasing the value of sum
    }

    printf("The FINAL result is %d", sum); // printing the final sum of the numbers
    return 0; // ending the program
}