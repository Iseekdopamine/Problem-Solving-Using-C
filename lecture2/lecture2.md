Lecture 2 

Pseudocode, Algorithm, and Flowchart 

 

1. Algorithm 

1.1 Definition 

An algorithm is a step-by-step, finite set of instructions used to solve a problem. 

In simple words: 

An algorithm is a logical procedure to solve a problem. 

 

1.2 Characteristics of a Good Algorithm 

A good algorithm should have: 

    Input – It may take zero or more inputs 

    Output – It must produce at least one output 

    Definiteness – Each step must be clear and unambiguous 

    Finiteness – It must finish in a finite number of steps 

    Effectiveness – Each step must be simple and executable 

 

1.3 Example Algorithm (To add two numbers) 

    Start 

    Read two numbers A and B 

    Compute C = A + B 

    Display C 

    Stop 

 

1.4 Advantages of Algorithm 

    Easy to understand 

    Easy to convert into any programming language 

    Helps in proper problem analysis 

    Improves logic building 

 

2. Pseudocode 

2.1 Definition 

Pseudocode is a simple, informal way of writing an algorithm using English-like statements. 

It is: 

    Not a programming language 

    Not executed by computer 

    Used only for understanding logic 

 

2.2 Features of Pseudocode 

    Easy to read and write 

    Independent of any programming language 

    Focuses only on logic, not syntax 

    Helps in planning before writing actual code 

 

2.3 Example Pseudocode (To add two numbers) 

START 
INPUT A, B 
C = A + B 
PRINT C 
STOP 
 

 

2.4 Difference Between Algorithm and Pseudocode 

Algorithm 
	

Pseudocode 

Step-by-step procedure 
	

Informal representation of algorithm 

Written in plain steps 
	

Written in structured English 

More theoretical 
	

More closer to programming 

 

3. Flowchart 

3.1 Definition 

A flowchart is a graphical (diagrammatic) representation of an algorithm. 

It shows: 

    Flow of control 

    Sequence of steps 

    Decision making 

 

3.2 Common Flowchart Symbols 

Symbol 
	

Name 
	

Purpose 

Oval 
	

Start/Stop 
	

Beginning or end 

Parallelogram 
	

Input/Output 
	

Read or print data 

Rectangle 
	

Process 
	

Calculation or assignment 

Diamond 
	

Decision 
	

Condition checking 

Arrow 
	

Flow line 
	

Direction of flow 

 

3.3 Example Flowchart (To add two numbers) 

Steps in flowchart: 

    Start 

    Input A, B 

    C = A + B 

    Print C 

    Stop 

 

3.4 Advantages of Flowchart 

    Easy to understand visually 

    Helps in debugging logic 

    Shows clear flow of control 

    Good for explaining program to others 

 

4. Relationship Between Algorithm, Pseudocode, and Flowchart 

Algorithm = Logic 

Pseudocode = Written form of logic 

Flowchart = Diagram of logic 

All three are used in problem solving before coding. 

 

5. Final Conclusion (Exam Ready) 

    An algorithm is a step-by-step solution to a problem. 

    Pseudocode is an English-like representation of an algorithm. 

    A flowchart is a graphical representation of an algorithm. 

    They help in planning, understanding, and writing correct programs. 

 

Arrays in C – Declaration and Basics 

1. What is an Array? 

An array is a collection of multiple values of the same data type stored in contiguous memory locations. 

Instead of writing: 

int a, b, c, d, e; 
 

We can write: 

int arr[5]; 
 

 

2. Why Do We Need Arrays? 

    To store many values in one variable 

    To avoid using many separate variables 

    To process data using loops 

    To make programs shorter and cleaner 

 

3. Array Declaration 

General Syntax: 

datatype array_name[size]; 
 

Example: 

int marks[5]; 
 

Meaning: 

    int is the data type 

    marks is the array name 

    5 is the number of elements 

So, marks can store 5 integers. 

 

4. Indexing in Array 

In C, array index starts from 0. 

If we have: 

int marks[5]; 
 

Elements are accessed as: 

marks[0], marks[1], marks[2], marks[3], marks[4] 
 

    First element is at index 0 

    Last element is at index 4 

 

5. Declaring and Initializing Arrays 

Method 1: Declare first, assign later 

int a[3]; 
a[0] = 10; 
a[1] = 20; 
a[2] = 30; 
 

 

Method 2: Declare and initialize together 

int a[3] = {10, 20, 30}; 
 

 

Method 3: Let compiler decide the size 

int a[] = {10, 20, 30, 40}; 
 

Here, the size becomes 4 automatically. 

 

6. Important Rules of Arrays 

    All elements must be of the same data type. 

    Array index always starts from 0. 

    Index must be less than the size of the array. 

    Array size must be a constant value. 

Wrong examples: 

int a[-5]; 
int a[x];   // if x is not a constant 
 

 

7. Using Array with Loop 

int a[5]; 
for(int i = 0; i < 5; i++) { 
   scanf("%d", &a[i]); 
} 
 

 

8. Example Program 

#include <stdio.h> 
 
int main() { 
   int marks[3] = {10, 20, 30}; 
 
   for(int i = 0; i < 3; i++) { 
       printf("%d\n", marks[i]); 
   } 
 
   return 0; 
} 

9. One Line Definition (For Exam) 

An array is a collection of similar data elements stored in contiguous memory locations and accessed using an index. 

Variable Length Array (VLA) in C 

1. What is a Variable Length Array? 

A Variable Length Array (VLA) is an array whose size is decided at runtime, not at compile time. 

In normal arrays: 

int a[10]; 
 

Size is fixed and known at compile time. 

In VLA: 

int n; 
scanf("%d", &n); 
int a[n]; 
 

Here, the size of array depends on user input. 

 

2. Why Do We Need Variable Length Arrays? 

    When we do not know the size in advance 

    When size depends on: 

    User input 

    Calculation result 

    To avoid wasting memory 

 

3. Syntax of Variable Length Array 

datatype array_name[size]; 
 

But here, size is a variable, not a constant. 

Example: 

int n; 
scanf("%d", &n); 
int arr[n]; 
 

 

4. Example Program Using VLA 

#include <stdio.h> 
 
int main() { 
   int n; 
   printf("Enter size: "); 
   scanf("%d", &n); 
 
   int arr[n]; 
 
   for(int i = 0; i < n; i++) { 
       arr[i] = i + 1; 
   } 
 
   for(int i = 0; i < n; i++) { 
       printf("%d ", arr[i]); 
   } 
 
   return 0; 
} 
 

 

5. Important Rules of VLA 

    VLA size must be greater than 0. 

    Size is decided at runtime. 

    VLA is stored in stack memory. 

    VLAs are supported in C99 and later standards. 

    VLA cannot be: 

    static 

    global 

Wrong: 

static int a[n]; 
 

 

6. Difference Between Normal Array and VLA 

Normal Array 
	

Variable Length Array 

Size fixed at compile time 
	

Size decided at runtime 

Size must be constant 
	

Size can be variable 

Example: int a[10]; 
	

Example: int a[n]; 

 

7. Limitations of VLA 

    Uses stack memory, so very large size may cause crash 

    Not supported by all compilers (optional in C11) 

    Size cannot be changed after creation 

 

8. Important Exam Line 

A Variable Length Array is an array whose size is determined at runtime instead of compile time. 

 

9. Note (Important for Future) 

In real projects, instead of VLA, programmers often use dynamic memory allocation: 

malloc() 

Memory Management of Variable Length Arrays (VLA) in C 

1. Where is VLA Stored in Memory? 

A Variable Length Array (VLA) is stored in stack memory. 

Example: 

int n; 
scanf("%d", &n); 
int arr[n]; 
 

Here: 

    arr is created inside a function 

    So it is allocated in the stack 

 

2. When is Memory Allocated? 

Memory for VLA is: 

Allocated at runtime, when program execution reaches the declaration of the array. 

Example: 

int n = 5; 
int arr[n];   // Memory allocated here at runtime 
 

 

3. When is Memory Deallocated? 

Memory for VLA is: 

Automatically deallocated when the function block ends. 

Example: 

int main() { 
   int n = 5; 
   int arr[n]; 
   // arr exists here 
}  // arr is destroyed here automatically 
 

So: 

    You do not need to free VLA memory manually. 

    The stack cleans it automatically. 

 

4. Who Manages VLA Memory? 

The compiler and operating system manage VLA memory automatically using the stack. 

Programmer: 

    Does not use malloc() 

    Does not use free() 

 

5. Size Limitation of VLA 

Because VLA is stored in stack memory: 

    Stack size is limited 

    If you create a very large VLA: 

int n = 10000000; 
int arr[n]; 
 

It may cause: 

    Stack overflow 

    Program crash (segmentation fault) 

 

6. Comparison with Dynamic Memory Allocation 

VLA 
	

malloc() 

Stored in stack 
	

Stored in heap 

Automatic allocation 
	

Manual allocation 

Automatic deallocation 
	

Must use free() 

Limited size 
	

Can allocate large memory 

 

7. Important Rules 

    VLA lifetime is limited to the scope of the block. 

    VLA memory is automatically created and destroyed. 

    You cannot return a VLA from a function. 

    You should not create very large VLAs. 

 

8. Example to Show Lifetime 

#include <stdio.h> 
 
void test() { 
   int n = 5; 
   int arr[n];  // Created here 
 
   arr[0] = 10; 
}  // arr is destroyed here 
 
int main() { 
   test(); 
   return 0; 
} 
 

 

9. Exam One-Line Answer 

Memory for Variable Length Arrays is allocated in stack at runtime and automatically deallocated when the function block ends. 

 

10. Important Conclusion 

    VLA uses stack memory 

    Memory is managed automatically 

    Fast but limited in size 

    For large or long-lived arrays, use dynamic memory allocation (malloc) 

 

printf() and scanf() in C 

 

1. printf() Function 

1.1 What is printf()? 

printf() is a library function used to print output on the screen. 

It is defined in: 

#include <stdio.h> 
 

 

1.2 General Syntax 

printf("format string", variable1, variable2, ...); 
 

 

1.3 Simple Example 

printf("Hello World"); 
 

This prints: 

Hello World 
 

 

1.4 Printing Variables 

int x = 10; 
printf("Value of x is %d", x); 
 

Output: 

Value of x is 10 
 

 

1.5 Format Specifiers (Very Important) 

Data Type 
	

Format Specifier 

int 
	

%d 

float 
	

%f 

char 
	

%c 

double 
	

%lf 

string 
	

%s 

 

1.6 Return Value of printf() 

int printf(...) 
 

    Returns number of characters printed 

    Returns negative value if an error occurs 

 

2. scanf() Function 

2.1 What is scanf()? 

scanf() is a library function used to take input from the user. 

It is defined in: 

#include <stdio.h> 
 

 

2.2 General Syntax 

scanf("format string", &variable1, &variable2, ...); 
 

 

2.3 Simple Example 

int x; 
scanf("%d", &x); 
 

This reads an integer from the keyboard and stores it in x. 

 

2.4 Why Do We Use & in scanf()? 

Example: 

scanf("%d", &x); 
 

    &x means address of x 

    scanf needs the memory location where it should store the input 

    Without &, the program will crash or behave incorrectly 

 

2.5 Taking Multiple Inputs 

int a, b; 
scanf("%d %d", &a, &b); 
 

 

2.6 Return Value of scanf() 

int scanf(...) 
 

    Returns number of values successfully read 

    Returns EOF if input fails 

Example: 

int x; 
int r = scanf("%d", &x); 
 

If input is valid: 

r = 1 
 

If input is invalid: 

r = 0 
 

 

3. Difference Between printf() and scanf() 

printf 
	

scanf 

Used for output 
	

Used for input 

Sends data to screen 
	

Reads data from keyboard 

Does not use & 
	

Uses & with variables 

Returns number of characters printed 
	

Returns number of inputs read 

 

4. Common Mistakes 

    Forgetting & in scanf: 

scanf("%d", x);   // Wrong 
scanf("%d", &x);  // Correct 
 

    Using wrong format specifier: 

float f; 
scanf("%d", &f);  // Wrong 
scanf("%f", &f);  // Correct 
 

 

5. Example Program Using printf and scanf 

#include <stdio.h> 
 
int main() { 
   int a, b; 
   printf("Enter two numbers: "); 
   scanf("%d %d", &a, &b); 
 
   printf("Sum = %d", a + b); 
   return 0; 
} 
 

 

6. Important Exam Lines 

    printf() is used to display output on the screen. 

    scanf() is used to take input from the user. 

    Both are defined in stdio.h. 

    printf() returns number of characters printed. 

    scanf() returns number of values successfully read. 

 

7. Very Important Concept (Preview) 

scanf uses addresses and pointers. That’s why & is needed. 

This will make more sense when you study pointers. 

 

Debugging and Efficiency in Programming 

1. Debugging 

1.1 What is Debugging? 

Debugging is the process of finding and fixing errors (bugs) in a program. 

A bug is any mistake in a program that causes: 

    Wrong output 

    Program crash 

    Unexpected behavior 

 

1.2 Types of Errors 

1. Syntax Errors 

    Mistakes in grammar of the language 

    Found by the compiler 

Example: 

int a = 10   // missing semicolon 
 

 

2. Runtime Errors 

    Occur while the program is running 

    Program may crash 

Example: 

int a[5]; 
a[10] = 3;   // out of bounds 
 

 

3. Logical Errors 

    Program runs but gives wrong output 

    Most difficult to find 

Example: 

if (a = b)   // should be a == b 
 

 

1.3 Common Debugging Techniques 

    Using printf() 

    Print values to check what is happening 

    Step-by-step execution 

    Check program flow line by line 

    Checking input and output 

    Verify intermediate results 

    Checking return values 

    Example: check return value of scanf() 

    Using a debugger (like gdb) 

 

1.4 Example of Debugging 

Buggy code: 

scanf("%d %d", &a, &b); 
 

User enters: 

2, 3 
 

Result: wrong output because format does not match input. 

Fix: either change input or change format string. 

 

2. Efficiency 

2.1 What is Efficiency? 

Efficiency of a program means how well it uses time and memory. 

Two types: 

    Time Efficiency – How fast the program runs 

    Space Efficiency – How much memory the program uses 

 

2.2 Time Efficiency 

Time efficiency depends on: 

    Algorithm used 

    Number of operations 

    Input size 

Example: 

    Linear search: slow for large data 

    Binary search: faster for large data 

 

2.3 Space Efficiency 

Space efficiency depends on: 

    Number of variables used 

    Data structures used 

    Use of memory (stack vs heap) 

Example: 

    Using large arrays unnecessarily wastes memory 

 

2.4 Example of Inefficient Code 

for(int i = 0; i < n; i++) { 
   for(int j = 0; j < n; j++) { 
       printf("*"); 
   } 
} 
 

This runs n × n times (slow for big n). 

 

2.5 Improving Efficiency 

    Choose better algorithms 

    Avoid unnecessary loops 

    Avoid repeated calculations 

    Use proper data structures 

    Use memory carefully 

 

3. Relationship Between Debugging and Efficiency 

    Debugging makes the program correct 

    Efficiency makes the program fast and memory-friendly 

First make the program correct, then make it efficient. 

 

4. Important Exam Lines 

    Debugging is the process of finding and fixing errors in a program. 

    Efficiency means optimal use of time and memory. 

    There are three types of errors: syntax, runtime, and logical. 

    A good program is both correct and efficient. 

 

5. Simple Real-Life Analogy 

    Debugging = fixing mistakes in a machine 

    Efficiency = making the machine faster and use less fuel 

 

 

 
 

 

 
