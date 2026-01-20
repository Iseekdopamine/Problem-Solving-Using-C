Lecture 4 

Jump statements in C 

 

Break Statement in C 

The break statement exits or terminates the loop or switch statement based on a certain condition, without executing the remaining iteration of the loop or checking remaining cases in switch statement. 

Uses of break in C 

The break statement is used in C for the following purposes: 

    To come out of the loop. 

    To come out of the switch case. 

Note: If the break statement is used inside an inner loop in a nested loop, it will break the inner loop without affecting the execution of the outer loop. 

Continue Statement in C 

The continue statement in C is used to skip the remaining code after the continue statement within a loop and jump to the next iteration of the loop. When the continue statement is encountered, the loop control immediately jumps to the next iteration, by skipping the lines of code written after it within the loop body. 

Note: While using continue in loop, we have to make sure that we put the continue after the loop variable updation or else it will result in an infinite loop. 

Goto Statement in C 

The goto statement is used to jump to a specific point from anywhere in a function. It is used to transfer the program control to a labeled statement within the same function. 

Note: The use of goto is generally discouraged in the programmer's community as it makes the code complex to understand. 

Return Statement in C 

The return statement in C is used to terminate the execution of a function and return a value to the caller. It is commonly used to provide a result back to the calling code. 

https://www.geeksforgeeks.org/c/comma-in-c/ 

 

NULL STATEMENT  

 

In C programming, a null statement is a statement that does nothing. It consists only of a single semicolon (;) and is used as a placeholder where the C language syntax requires a statement, but no action is needed. 

 

 

Array of Pointers in C 

In C, a pointer array is a homogeneous collection of indexed pointer variables that are references to a memory location. It is generally used in C Programming when we want to point at multiple memory locations of a similar data type in our C program. We can access the data by dereferencing the pointer pointing to it. 

Note: It is important to keep in mind the operator precedence and associativity in the array of pointers declarations of different type as a single change will mean the whole different thing. For example, enclosing *array_name in the parenthesis will mean that array_name is a pointer to an array. 

Array of Pointers to Character 

One of the main applications of the array of pointers is to store multiple strings as an array of pointers to characters. Here, each pointer in the array is a character pointer that points to the first character of the string. 

https://www.geeksforgeeks.org/c/array-of-pointers-in-c/ 
