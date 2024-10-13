// find average of 2 numbers entered by user with help of C language
# include <stdio.h>

int main() {

    int NumberA, NumberB;
    printf("Enter value for number 1");
    scanf("%d", &NumberA);
    printf("Enter value for number 2");
    scanf("%d", &NumberB);
    float average = (NumberA + NumberB)/2;
    printf("The average of %d and %d is %f", NumberA, NumberB, average);

}