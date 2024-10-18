// Convert Celsius To farenhite or however shit's spelled
# include <stdio.h>

int main() {

    float celsius, farenhite; // delcaring the variable celsius and farenhite with datatype float
    // using float datatype because operation will be performed in decimals

    printf("Enter the value of Celsious scale: "); // prompt for the user to input the celsius
    scanf("%f", &celsius); // scanf function to take value as floating point
    // %f is used to tell program that scanned value is gonna be floating type
    

    farenhite = (celsius*9/5) + 32; // Applying the forumla for temprature conversion

    printf("The temprature for farenhite for celsious %f is : %f", celsius, farenhite); // printing the output
    // first %f is replaced by the celsius variable
    // second %f is replaced by the farenhite variable

    return 0; // end the program
}