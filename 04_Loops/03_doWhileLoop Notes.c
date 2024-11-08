// Number One: Do...While Loop

// do
// {
//     // statements inside the body of loop
// } while (testExpression);

// How do...while loop works?

// 1. The statements inside the body of the loop are executed first.
// 2. Then, the test expression is evaluated.
// 3. If the test expression is true, the loop repeats; if it's false, the loop stops.
// 4. This guarantees that the loop body is executed at least once, even if the test expression is initially false.


// EXAMPLE:

#include <stdio.h>
int main() {
    int i = 1; // Initialization statement

    // do...while loop to print values of i from 1 to 10
    do 
    {
        printf("The value of i is %d\n", i);
        i += 1; // Update statement
    } while (i <= 10); // Test expression
    
    return 0;
}

// int i = 1;
// This is the initialization statement, where we introduce a variable i with value 1 and declare it as an integer.

// The statements inside the do block are executed once without any condition check.

// i <= 10;
// This is the test expression. After executing the loop's body, the condition is checked.
// If this is true, the statements inside the do block are executed again.

// i += 1;
// This is the update statement, which adds 1 to the value of i after each iteration of the loop.


// HOW DID IT WORK:
// The loop executes the statements at least once, even if the condition is false from the start.
// After each iteration, the value of i is incremented by 1.
// Once the value of i becomes greater than 10, the test expression is false, and the loop stops executing.

// NOTES:
// Like the other loop types, any code can be placed inside the do...while loop to be executed at least once and
// then repeatedly as long as the condition is true.
