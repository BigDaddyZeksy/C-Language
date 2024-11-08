// Number One : For Loop

// for (initializationStatement; testExpression; updateStatement)
// {
//     // statements inside the body of loop
// }

// How for loop works?

// 1. The initialization statement is executed only once.
// 2. Then, the test expression is evaluated. If the test expression is false, the for loop is stopped.
// 3. However, if the test expression is true, statements inside the body of the for loop are executed, and the update expression is updated.
// 4. Again the test expression is evaluated.


// EXAMPLE : 

#include <stdio.h>
int main() {
for (int i =1; i <=10; i+=1) 
    {
    
    printf("The value of i is %d\n", i);

    }
    
    return 0;

}

// int i = 1; 
// This is the initialisation statement which introduces a variable i with value 1, we initialized it's data type as int

// i <=10;
// This is the expression statement, if this is true then the statement will be printed

// i+=1
// This is the update statement which will add 1 to the value of i


// HOW DID IT WORK:
// After the loop is executed, the value will be incremented, resulting in diluting the loop after 10 executions.
// This is because value of i will become over 10, as we are adding 1 everytime.
// Once the value of i is above 10, the loop won't be executed anymore

// NOTES
// Anything can be done under the for loop, you can pass in any piece of code which you want to execute x amount of times