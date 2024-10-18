// Finding out that the number provided by the user is even or odd

# include <stdio.h>

int main() {

    int number; // Declaring the variable number with integer datatype
    printf("Enter the number: "); // giving user the prompt to provide input
    scanf("%d", number); // scanning the value

    // checking if it's a perfect division with 2 for the number
    if (number%2==0){
        printf("The number is even", number); // if it's a perfect division then print that the number is even
    }
    else {
        printf("The number is odd", number); // otherwise print that the number is odd
    }
    
    return 0; // end the program
}