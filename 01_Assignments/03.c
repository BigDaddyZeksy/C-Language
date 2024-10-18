//  Q.3 Calculate simple interest where principal, time and rate are given

# include <stdio.h>
int main() {

    int r = 7, t = 5, p = 1000;
    // r is rate 7% per year
    // t is time, so for 5 years
    // p is principal so 1000 INR

    int interest = (p*r*t)/100; // Applying the matheimatical formula of simple interest
    printf("The simple interest will be: %d", interest);
    return 0;

}