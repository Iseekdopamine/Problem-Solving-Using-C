Problem solving using C  

Communication Between Software and Hardware Using Operating System 

1. Introduction 

A computer system consists of three main components: 

    Hardware (CPU, memory, keyboard, disk, etc.) 

    Software (programs, applications) 

    Operating System (OS) 

The Operating System acts as an interface (middleman) between the software and the hardware. 

Programs cannot directly access hardware. All communication is done through the OS. 

 

2. Why Operating System is Needed as an Interface 

If every program directly accessed hardware: 

    It would be very complex to write programs. 

    It would be unsafe and could damage the system. 

    A single faulty program could crash the entire computer. 

Therefore: 

Software is not allowed to directly communicate with hardware. The OS controls all access. 

 

3. How Software Communicates with the OS (System Calls) 

When a program wants to: 

    Print output 

    Read input 

    Open a file 

    Use memory 

It does not access hardware directly. Instead, it requests the Operating System using system calls. 

Definition: 

A system call is a method used by a program to request a service from the Operating System. 

Example: 

When we use printf() in C, internally it uses a system call to ask the OS to display output on the screen. 

So: 

Software → uses System Calls → Operating System 

 

4. How OS Communicates with Hardware (Device Drivers) 

Hardware devices are different for different companies (keyboard, printer, disk, etc.). 

The OS cannot directly control every device. 

So, for each hardware device, the OS uses a device driver. 

Definition: 

A device driver is a special program that helps the Operating System communicate with a specific hardware device. 

So: 

Operating System → uses Driver → Hardware 

 

5. Overall Communication Flow 

The complete communication happens as: 

Application Program → System Calls → Operating System → Device Drivers → Hardware 

 

6. Advantages of This Design 

    Improves system security 

    Improves system stability 

    Makes programming easier 

    Allows same program to run on different hardware 

    Prevents direct misuse of hardware 

 

7. Conclusion 

The Operating System acts as a bridge between software and hardware. 

Software communicates with the OS using system calls, and the OS communicates with hardware using device drivers. 

 

Basic C Program: Hello World 

1. Program Code 

#include <stdio.h> 
 
int main() { 
   printf("Hello World"); 
   return 0; 
} 
 

 

2. Explanation of Each Line 

Line 1: 

#include <stdio.h> 
 

    This is a preprocessor directive. 

    It tells the compiler to include the Standard Input Output header file. 

    stdio.h contains the declarations of functions like: 

    printf() 

    scanf() 

    Without this line, the compiler will not know what printf() is. 

 

 

Line 2: 

int main() { 
 

    main() is the entry point of every C program. 

    Execution of the program always starts from main(). 

    int means main() returns an integer value to the operating system. 

    { indicates the start of the function body. 

 

Line 3: 

printf("Hello World"); 
 

    printf() is used to display output on the screen. 

    "Hello World" is a string literal. 

    This function is defined in stdio.h. 

 

Line 4: 

return 0; 
 

    This statement returns 0 to the operating system. 

    0 means the program executed successfully. 

    Since main() has return type int, it must return an integer value. 

 

Line 5: 

} 
 

    This marks the end of the main function. 

 

3. Can We Write Preprocessor Directives Anywhere in the Program? 

No. 

Preprocessor directives must be written at the beginning of the program, before any function definitions. 

Reasons: 

    They are processed before compilation. 

    They tell the compiler what files or macros are needed in advance. 

    Writing them in the middle of the program is bad practice and can cause errors or confusion. 

 

4. Why Do We Need stdio.h in This Program? 

This program uses: 

printf("Hello World"); 
 

    printf() is declared inside stdio.h. 

    Without including stdio.h: 

    The compiler will not know about printf() 

    It may give a warning or error 

    The program becomes non-standard and unsafe 

So: 

stdio.h is needed to use input/output functions like printf() and scanf(). 

 

5. What Are the Return Types of printf and scanf? 

Return type of printf(): 

int printf(...) 
 

    It returns: 

    Number of characters printed on success 

    A negative value if an error occurs 

 

Return type of scanf(): 

int scanf(...) 
 

    It returns: 

    Number of input values successfully read and assigned 

    EOF if input fails 

 

6. Conclusion 

This is the simplest C program that demonstrates: 

    Use of preprocessor directive 

    Structure of main() function 

    Use of printf() for output 

    Proper program termination using return 0 

 

Process of Compilation and Execution of a C Program 

1. Introduction 

A C program does not run directly. It must go through several steps before execution. 

These steps convert the human-readable C code into machine-executable code. 

 

2. Stages of C Program Execution 

The execution of a C program involves the following steps: 

1. Writing Source Code 

    The program is written in a file with .c extension. 

    Example: program.c 

 

2. Preprocessing 

    Done by the preprocessor. 

    It handles: 

    #include statements 

    #define macros 

    Comments removal 

Example: 

#include <stdio.h> 
 

This line is replaced with the actual content of stdio.h. 

 

3. Compilation 

    The compiler checks: 

    Syntax errors 

    Grammar rules 

    Converts preprocessed code into object code. 

    If there are errors, compilation stops. 

 

4. Linking 

    The linker: 

    Connects function calls like printf() to their actual definitions. 

    Combines different object files. 

    Produces the final executable file (a.out or program.exe). 

 

5. Loading and Execution 

    The operating system: 

    Loads the executable into memory 

    Starts execution from the main() function 

 

3. Diagram (For Understanding) 

Source Code → Preprocessor → Compiler → Linker → Executable → Execution 

 

Declaration vs Definition 

1. Declaration 

Definition: 

A declaration tells the compiler that something exists, but does not allocate memory. 

Example: 

int x; 
int add(int a, int b); 
 

    Tells the compiler: 

    x exists 

    add() exists 

    But does not provide full implementation of function. 

 

2. Definition 

Definition: 

A definition tells the compiler what something is and allocates memory. 

Example: 

int x = 10; 
int add(int a, int b) { 
   return a + b; 
} 
 

    Memory is allocated 

    Actual code or value is provided 

 

3. Key Differences 

Declaration 
	

Definition 

Tells about existence 
	

Creates the actual thing 

No memory allocation 
	

Memory is allocated 

Can be written multiple times 
	

Should be written only once 

 

Why C is Called a High-Level Language with Low-Level Features 

1. Why C is a High-Level Language 

    Uses: 

    English-like keywords (if, while, return) 

    Structured programming 

    Functions 

    Easy to read and write compared to assembly language 

    Portable (same program can run on different machines) 

 

2. Why C Has Low-Level Features 

C also allows: 

    Direct memory access using pointers 

    Bitwise operations 

    Manual memory management 

    Close interaction with hardware 

Example: 

int *p = &x; 
 

 

3. Conclusion 

C is called a middle-level language because: 

    It supports high-level programming features 

    And also provides low-level hardware control 

 

Exam Conclusion Lines (Very Important) 

    C program execution involves: Preprocessing → Compilation → Linking → Execution 

    Declaration tells what exists, definition tells what it is 

    C is high-level because of easy syntax and structure, and low-level because it supports pointers and memory access. 

 

 

 

 

 
