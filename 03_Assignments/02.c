// write a program using switch case where you'll have to enter two numbers with the help of user & basic operants to create simple calculator
# include <stdio.h>
int main() {
    int NumberOne, NumberTwo; // Declaring Two Int Types We will take Input as integer datatype from user
    char operatorrr; // Declaring a variable to take character datatype for operator
    
    printf("Hello Please select an operater out of +, -, * ");   // Printing a prompt allowing user to enter an operator
    scanf("%c", &operatorrr); // Scanf function to store the operator
    printf("%c", operatorrr); // %c is used to tell the program that stored value is character

    printf("Hello Enter the number please kind sir! ");  // Asking for number 1 from the user
    scanf("%d", &NumberOne); // Scanf with %d to tell the program that stored value is integer datatype

    printf("Hello Enter the second number please kind sir! "); // Asking for numebr 2 from the user
    scanf("%d", &NumberTwo); 

    // switch case with operatorrr variable 
    switch (operatorrr) { 
        case '+':  // If the operator is + 
            printf("Result: %d\n", NumberOne + NumberTwo); // numbers are added
            break; // operation is broken/ended
        
        case '-':
            printf("Result: %d\n", NumberOne - NumberTwo); // numbers are subtracted
            break; // operation is broken/ended again
        

        case '*': // If the operator is *
            printf("Result: %d\n", NumberOne * NumberTwo); // numbers are multiplied
            break; // operation is broken/ended again
        
        case '/': // If the operator is /
            printf("Result: %d\n", NumberOne / NumberTwo); // NumberOne is divided by numbertwo
            break;

        default: // default case if the input of user is outside of the scope of +, -, *, or /
            printf("Invalid operator selected!\n"); // Tells the user that the operation is invalid
            break;  // operation is broken/ended again   
    }
    return 0;    // return to end the program
}