// Leap Year Finder

# include <stdio.h>

int main() {

    int year; // declaring the variable year with integer type
    
    printf("Enter a year: "); // giving prompt to the user
    scanf("%d", &year); // scanf function to store the value inside year variable


    // checking if the number is perfectly divisible by 4
    if (year%4==0) {
        printf("%d is a leap year", year); // if its perfect divison then print that it's leap year
    }
    else {
        printf("%d is not a leap year", year); // otherwise print that it's not a leap year
    }

    return 0; // end the program

}