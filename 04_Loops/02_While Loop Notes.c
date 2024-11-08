// Number One: While Loop

// while (testExpression) 
// {
//     // statements inside the body of loop
// }

// How while loop works?

// 1. The test expression is evaluated at the start of each iteration.
// 2. If the test expression is false, the while loop is stopped.
// 3. However, if the test expression is true, the statements inside the body of the while loop are executed.
// 4. After executing the loop's body, it checks the test expression again.


// EXAMPLE:

#include <stdio.h>
int main() {
    int i = 1; // Initialization statement

    // while loop to print values of i from 1 to 10
    while (i <= 10) 
    {
        printf("The value of i is %d\n", i);
        i += 1; // Update statement
    }
    
    return 0;
}

// int i = 1;
// This is the initialization statement, where we introduce a variable i with value 1 and declare it as an integer.

// i <= 10;
// This is the test expression. If this is true, the statements inside the body of the while loop are executed.

// i += 1;
// This is the update statement, which adds 1 to the value of i after each iteration of the loop.


// HOW DID IT WORK:
// After each loop iteration, the value of i is incremented by 1.
// Once the value of i becomes greater than 10, the test expression is false, and the loop stops executing.

// NOTES:
// Just like the for loop, any code can be placed inside the while loop to be executed repeatedly as long as the condition is true.
