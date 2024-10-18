// Write a program to enter a numecric value, based on the numvalue find out what day of the week it is

#include <stdio.h>

int main() {

    int numValue; // Declaring numValue variable with integer datatype
    printf("Enter a numeric value to find the day of the week: "); // prompt for the user to enter an integer
    scanf("%d", &numValue); // Scanf function to take the number and %d is used for integer types
    
    // switch case which operates on variable numValue and shows results based on the input
    
    switch (numValue) { 
        // If numValue is 1 then it'll print monday and so on till 7
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        
        // If the numValue isn't within 1-7 then it'll tell user that they need to enter 1-7
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
            break;

        }
    return 0; // end the program yay!
}