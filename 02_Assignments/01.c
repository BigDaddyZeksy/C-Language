// Swapping of two numbers

#include <stdio.h>

int main() {

    int a = 5, b = 10, temp = a; // Declare and initialise 3 variables, a b and temp
    // Here temp holds the value of a inorder to not lose it once a is changed to b

    a = b, b = temp; // a is turned to b and b is turned to temp which earlier had the value of a
    printf("The value inside a after swapping is %d and value inside b is %d", a, b); // printing the output
    return 0; // ending the program

}