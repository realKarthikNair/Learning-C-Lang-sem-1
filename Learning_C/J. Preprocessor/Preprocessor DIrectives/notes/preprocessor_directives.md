# Preprocessor Directives

- A directive is a language construct that specifies how a compiler should process its input.
- They facilitate in making the source programs easy to change and compile. e,g,. replacing tokens in text, inserting the contents of other files into source files, etc
- Directives are subjective to different C compilers

e.g., `#include`, `#define`, `#ifdef`, etc

### Categories of Preprocessor Directives

### **1. File inclusion**

- includes header files or other C files into the main program file

Syntax
```c
#include <any header file>
#include "any C file"
```

Header files are written in angular brackets to tell the preprocessor to search for them directly in the standard library.

### **2. Macros**

- Basically used to define constant values, function-like definitions in special cases
- Biggest advantage: Macros don't allocate memory 

Different types of macros:

(i) Symbolic constant

- Defines a constant value

Syntax:

```c
#define SYMBOLIC_CONSTANT_NAME VALUE
```

Example:

```c
#define PI 3.14
```
- To make another symbolic constant, you need to write another #define statement

(ii) Argumented Macros

- Also known as function-like 
- Helps to avoid context-switching caused by functions

Example:

```c
#define SUM(a,b,c) a+b+c
```
(iii) Nested macros

- using a macro relative to the definition of a previous macro in sequence

Example:

```c
#define PI 3.14
#define CIRCLE_AREA(x) PI*x*x
```
(iv) Conditional Compilation 

- Allows us to skip compiling certain part of code based on conditions

- `#if`, `ifdef`, `ifndef`, `else`, `endif`, `indef`
- 

```c
#include <stdio.h>
#define PI 5

int main()
{
    #if (PI==3)
        printf("Correct value!");
    #else
        #undef PI
        #define PI 3
        printf("Correct value assigned!");
    #endif
}
```
