// Q.2 Take Radius as input from the user and find area of circle
# include <stdio.h>

int main() {

    float raidus, area, pi; // Declaring Radius area pi as floating point numbers
    pi = 3.14; // Initialising the value of Pi, 3.14 is the arthematic value of it

    printf("Enter the radius of circle: "); // prompt to tell the user to input raidus
    scanf("%f", &raidus); // Asking the user to input the raidus of the circle, %f is used to tell the program that variable is float type

    area = raidus*raidus*pi; // Formula of area of circle, pi r^2
    printf("The Area of Circle With Radius %f Is: %f", raidus, area);
    return 0;
    
}