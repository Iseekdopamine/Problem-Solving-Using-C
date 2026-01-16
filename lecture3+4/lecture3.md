Lecture 3 

Data Types in C 

1. What is a Data Type? 

A data type specifies what type of data a variable can store, and how much memory it occupies. 

Example: 

int x; 
 

Here, int is a data type that tells: 

    x can store an integer 

    How much memory to allocate for x 

 

2. Classification of Data Types in C 

C data types are mainly divided into: 

    Primitive (Basic) Data Types 

    Derived / User-Defined Data Types 

 

3. Primitive (Basic) Data Types 

Primitive data types are basic built-in data types provided by C. 

3.1 int 

    Used to store integer numbers 

    Example: 

int a = 10; 
 

 

3.2 float 

    Used to store decimal (real) numbers 

    Example: 

float f = 3.14; 
 

 

3.3 double 

    Used to store double precision decimal numbers 

    More accurate than float 

    Example: 

double d = 3.141592; 
 

 

3.4 char 

    Used to store single character 

    Example: 

char c = 'A'; 
 

 

3.5 void 

    Represents no value 

    Used for: 

    Functions that return nothing 

    Generic pointers 

Example: 

void test() { } 
 

 

4. Derived / User-Defined Data Types 

These are data types that are created using primitive data types or defined by the user. 

They include: 

    Array 

    Pointer 

    Structure 

    Union 

    Enumeration (enum) 

    typedef 

 

4.1 Array 

An array is a collection of similar data elements stored in contiguous memory locations. 

Example: 

int a[5]; 
 

 

4.2 Pointer 

A pointer is a variable that stores the address of another variable. 

Example: 

int x = 10; 
int *p = &x; 
 

 

4.3 Structure 

A structure is a collection of different data types under one name. 

Example: 

struct Student { 
    int id; 
    float marks; 
}; 
 

 

4.4 Union 

A union is similar to structure, but shares memory among its members. 

Example: 

union Data { 
    int i; 
    float f; 
}; 
 

 

4.5 Enumeration (enum) 

enum is used to define a set of named integer constants. 

Example: 

enum Day {Mon, Tue, Wed}; 
 

 

4.6 typedef 

typedef is used to give a new name (alias) to an existing data type. 

Example: 

typedef int myint; 
myint x; 
 

 

5. Summary Table 

Primitive Data Types 
	

Derived / User-Defined Data Types 

int 
	

array 

float 
	

pointer 

double 
	

structure 

char 
	

union 

void 
	

enum, typedef 

 

6. Important Exam Lines 

    Primitive data types are basic built-in data types. 

    Derived and user-defined data types are created using basic data types. 

    Array, pointer, structure, union, enum, and typedef come under derived/user-defined types. 

 

7. One-Line Answer 

In C, data types are classified into primitive data types and derived/user-defined data types. 

 

The int Data Type in C 

 

1. What is int? 

int is a primitive data type used to store integer (whole) numbers. 

Examples: 

int a = 10; 
int b = -25; 
 

 

2. How Much Memory Does int Use? 

The size of int depends on the system and compiler, but on most modern systems: 

    int = 4 bytes = 32 bits 

You can check it using: 

printf("%zu", sizeof(int)); 
 

 

3. How Does int Store Data in Memory? 

If int is 4 bytes: 

4 bytes = 32 bits 
 

So an int uses 32 bits to store a number. 

For a signed int: 

    1 bit is used for sign 

    Remaining bits are used for value 

So: 

[ sign bit ][ remaining bits for number ] 
 

 

4. How Does C Distinguish Between Positive and Negative Numbers? 

C uses the most significant bit (MSB): 

    0 → Positive number 

    1 → Negative number 

Example for 8-bit representation: 

00000101 = +5 
10000101 = negative number 
 

But negative numbers are not stored directly. They are stored using 2’s complement. 

 

5. 1’s Complement and 2’s Complement 

Let’s understand this using 8-bit example for simplicity. 

 

5.1 Binary of +5 

5 = 00000101 
 

 

5.2 1’s Complement 

To get 1’s complement: 

Invert all bits (0 → 1, 1 → 0) 

00000101  (5) 
11111010  (1's complement of 5) 
 

This represents -5 in 1’s complement system. 

Problem with 1’s complement: 

    It has two zeros: +0 and -0 

    That is inefficient 

 

5.3 2’s Complement (Used by C) 

To get 2’s complement: 

Take 1’s complement and add 1 

1’s complement of 5 = 11111010 
Add 1               = 11111011 
 

So: 

11111011 = -5  (in 2’s complement) 
 

 

5.4 Why 2’s Complement is Used? 

    Only one zero 

    Arithmetic becomes simpler 

    Used by almost all computers and C compilers 

 

6. Range of int 

Range depends on number of bits. 

 

6.1 For 8-bit signed int (example) 

    1 bit for sign 

    7 bits for value 

Range: 

-2^7  to  + (2^7 - 1) 
= -128 to +127 
 

 

6.2 For 32-bit signed int (most systems) 

    1 bit for sign 

    31 bits for value 

Range: 

-2^31 to + (2^31 - 1) 
= -2147483648 to +2147483647 
 

 

6.3 For Unsigned int (32-bit) 

    All 32 bits for value 

    No sign bit 

Range: 

0 to (2^32 - 1) 
= 0 to 4294967295 
 

 

7. Signed int vs Unsigned int 

7.1 Signed int 

int x = -10; 
 

    Can store both positive and negative 

    Uses 2’s complement 

    Typical range (32-bit): 

-2147483648 to +2147483647 
 

 

7.2 Unsigned int 

unsigned int x = 10; 
 

    Can store only non-negative numbers 

    All bits used for value 

    Typical range (32-bit): 

0 to 4294967295 
 

 

8. Types of int in C 

C provides modifiers for int: 

    short int 

    int 

    long int 

    long long int 

    unsigned int 

    signed int 

 

8.1 Typical Sizes (May Vary by System) 

Type 
	

Size (bytes) 

short int 
	

2 bytes 

int 
	

4 bytes 

long int 
	

8 bytes (or 4 on some systems) 

long long int 
	

8 bytes 

 

8.2 Examples 

short int a = 10; 
int b = 100; 
long int c = 100000; 
long long int d = 10000000000; 
unsigned int e = 50; 
 

 

9. Program to Understand int Better 

#include <stdio.h> 
#include <limits.h> 
 
int main() { 
    printf("Size of int = %zu bytes\n", sizeof(int)); 
 
    printf("Signed int range: %d to %d\n", INT_MIN, INT_MAX); 
    printf("Unsigned int max: %u\n", UINT_MAX); 
 
    int a = -5; 
    unsigned int b = 5; 
 
    printf("a = %d\n", a); 
    printf("b = %u\n", b); 
 
    return 0; 
} 
 

 

10. Important Exam Lines 

    int usually occupies 4 bytes (32 bits). 

    Signed int uses 2’s complement to represent negative numbers. 

    MSB (most significant bit) represents the sign. 

    Range of 32-bit signed int: -2³¹ to +2³¹−1. 

    Range of 32-bit unsigned int: 0 to 2³²−1. 

 

11. One-Line Summary 

int is a 32-bit (usually) signed data type that uses 2’s complement representations to store positive and negative integers. 

 

ASCII Value of Characters in C 

 

1. What is ASCII? 

ASCII stands for American Standard Code for Information Interchange. 

It is a standard numbering system used to represent: 

    Letters 

    Digits 

    Symbols 

    Special characters 

inside the computer. 

 

2. How Characters Are Stored in C 

In C: 

char c = 'A'; 
 

This does not store 'A' as a character. 

It stores: 

The number corresponding to 'A' in ASCII. 

For example: 

'A' = 65 
 

So internally: 

char c = 65; 
 

and 

char c = 'A'; 
 

are equivalent. 

 

3. ASCII Table Basics 

ASCII uses 7 bits (0 to 127). 

So: 

0 to 127 = 128 characters 
 

 

4. Important ASCII Ranges 

Characters 
	

ASCII Range 

Digits '0'–'9' 
	

48 – 57 

Uppercase 'A'–'Z' 
	

65 – 90 

Lowercase 'a'–'z' 
	

97 – 122 

Space 
	

32 

Newline '\n' 
	

10 

Examples: 

'A' = 65 
'a' = 97 
'0' = 48 
 

 

5. Character to Integer Conversion 

In C, you can do: 

char c = 'A'; 
int x = c; 
printf("%d", x); 
 

Output: 

65 
 

Because c is stored as ASCII number. 

 

6. Integer to Character Conversion 

int x = 66; 
printf("%c", x); 
 

Output: 

B 
 

 

7. Character Arithmetic in C 

Because characters are stored as numbers, you can do: 

char c = 'A'; 
c = c + 1; 
printf("%c", c); 
 

Output: 

B 
 

 

8. Very Common Trick: Uppercase to Lowercase 

Difference between 'a' and 'A': 

'a' - 'A' = 32 
 

So: 

char c = 'A'; 
char lower = c + 32; 
printf("%c", lower); 
 

Output: 

a 
 

 

9. Program to Display ASCII Value of a Character 

#include <stdio.h> 
 
int main() { 
    char c; 
    printf("Enter a character: "); 
    scanf("%c", &c); 
 
    printf("Character = %c\n", c); 
    printf("ASCII value = %d\n", c); 
 
    return 0; 
} 
 

 

10. Program to Print ASCII Table (0–127) 

#include <stdio.h> 
 
int main() { 
    for(int i = 0; i < 128; i++) { 
        printf("%d = %c\n", i, i); 
    } 
    return 0; 
} 
 

 

11. Important Exam Lines 

    ASCII is a standard code used to represent characters as numbers. 

    In C, characters are stored as their ASCII integer values. 

    The ASCII range is from 0 to 127. 

    'A' = 65, 'a' = 97, '0' = 48. 

 

12. One-Line Summary 

In C, a character is stored as an integer value according to the ASCII encoding standard. 

 

13. Important Note (Advanced) 

    Modern systems also use Unicode / UTF-8, but C basic char and many functions assume ASCII-compatible encoding. 

 

Types of Compilers 

A compiler is a program that translates source code written in one language into another language (usually machine code). 

Different types of compilers exist based on what they translate and where they run. 

1. Cross Compiler 

Definition 

A cross compiler is a compiler that runs on one system but generates code for another system. 

In simple words: 

    Compiler runs on: Machine A 

    Program runs on: Machine B 

 

Example 

    You write code on a PC 

    You generate code for: 

    Microcontroller 

    ARM processor 

    Embedded system 

Example: 

GCC on PC compiling code for ARM. 

 

Why It Is Used 

    Embedded systems development 

    When target system is too small or weak to run compiler 

    To build operating systems and firmware 

 

2. Bootstrap Compiler 

Definition 

A bootstrap compiler is a compiler that is written in the same language that it compiles. 

 

How It Works (Concept) 

Suppose you want to write a C compiler in C: 

    First, write a small simple compiler in another language (or assembly) 

    Use it to compile a bigger part of the C compiler 

    Gradually, you get a full C compiler written in C 

This process is called bootstrapping. 

 

Why It Is Used 

    To prove that a language is powerful enough to compile itself 

    To build portable and maintainable compilers 

 

3. Decompiler 

Definition 

A decompiler translates machine code or executable file back into high-level source code. 

 

In Simple Words 

    Input: Executable file (.exe, binary) 

    Output: High-level code (approximate) 

 

Important Note 

    Output is not exactly same as original source code 

    Variable names, comments, structure are usually lost 

 

Uses 

    Reverse engineering 

    Malware analysis 

    Debugging 

    Understanding legacy software 

 

4. Transcompiler (Source-to-Source Compiler) 

Definition 

A transcompiler translates a program from one high-level language to another high-level language. 

Also called: 

Source-to-source compiler 

 

Examples 

    C → C++ 

    C → JavaScript 

    Python → C 

 

Why It Is Used 

    Porting software to another language 

    Optimization 

    Making code compatible with another platform 

 

5. Summary Table (Very Exam Useful) 

Type 
	

Input 
	

Output 
	

Purpose 

Cross Compiler 
	

High-level code 
	

Machine code for another machine 
	

Embedded systems, OS 

Bootstrap Compiler 
	

Language X 
	

Compiler of same language X 
	

Build self-hosting compiler 

Decompiler 
	

Machine code 
	

High-level code 
	

Reverse engineering 

Transcompiler 
	

High-level code 
	

Another high-level code 
	

Porting, translation 

 

6. One-Line Exam Answers 

    Cross compiler generates code for a different machine. 

    Bootstrap compiler is written in the same language it compiles. 

    Decompiler converts machine code to high-level code. 

    Transcompiler converts one high-level language to another. 

 

7. Conclusion 

Different types of compilers exist to support different platforms, development methods, and reverse engineering needs. 

Conditional Operator in C  

1. What is the Conditional Operator? 

The conditional operator is a short form of if–else used to make a decision in a single line. 

It is the only ternary (3-operand) operator in C. 

 

2. Syntax 

condition ? expression_if_true : expression_if_false; 
 

Meaning: 

    If condition is true → first expression is executed 

    If condition is false → second expression is executed 

 

3. Simple Example 

Using if–else: 

int a = 10, b = 20; 
int max; 
 
if (a > b) 
   max = a; 
else 
   max = b; 
 

Using conditional operator: 

int max = (a > b) ? a : b; 
 

 

4. General Form with Assignment 

variable = (condition) ? value_if_true : value_if_false; 
 

 

5. Example Using var and flag 

This is the type of example teachers usually show. 

 

Example: Check if a number is positive using conditional operator 

#include <stdio.h> 
 
int main() { 
   int var; 
   int flag; 
 
   printf("Enter a number: "); 
   scanf("%d", &var); 
 
   // Using conditional operator 
   flag = (var > 0) ? 1 : 0; 
 
   if (flag == 1) 
       printf("Number is positive\n"); 
   else 
       printf("Number is not positive\n"); 
 
   return 0; 
} 
 

 

How This Works 

flag = (var > 0) ? 1 : 0; 
 

Means: 

    If var > 0 is true → flag = 1 

    Else → flag = 0 

So: 

The conditional operator is being used to set a flag variable based on a condition. 

 

6. Another Classic Example: Even or Odd 

#include <stdio.h> 
 
int main() { 
   int var; 
   int flag; 
 
   printf("Enter a number: "); 
   scanf("%d", &var); 
 
   flag = (var % 2 == 0) ? 1 : 0; 
 
   if (flag == 1) 
       printf("Even number\n"); 
   else 
       printf("Odd number\n"); 
 
   return 0; 
} 
 

 

7. Using Conditional Operator Without flag (Direct Printing) 

#include <stdio.h> 
 
int main() { 
   int var; 
   printf("Enter a number: "); 
   scanf("%d", &var); 
 
  (var > 0) ? printf("Positive\n") : printf("Not positive\n"); 
 
   return 0; 
} 
 

 

8. Why Use Conditional Operator? 

    Makes code shorter 

    Makes code cleaner for simple conditions 

    Avoids writing full if–else blocks for small logic 

 

9. When NOT to Use It 

    When logic is complex 

    When readability becomes worse 

    When multiple statements are needed 

Bad example: 

(condition) ? (do this, do that, do something else) : (many things); 
 

Use if–else instead. 

 

10. Important Exam Lines 

    The conditional operator is also called ternary operator. 

    It uses three operands. 

    It is a short form of if–else. 

    Syntax: condition ? expr1 : expr2. 

 

11. One-Line Definition 

The conditional operator is a ternary operator used to select one of two expressions based on a condition. 

 

12. Very Important Note 

This: 

flag = (var > 0) ? 1 : 0; 
 

is equivalent to: 

if (var > 0) 
   flag = 1; 
else 
   flag = 0; 
 

 

 

 

 

 

 

 
