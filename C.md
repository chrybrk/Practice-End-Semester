# Table of contents
1. [Basic of C Language](#basic_of_c_language)
    - [Keywords](#keywords)
    - [Interpreter vs Compiler](#interpreter_vs_compiler)
    - [Operator](#basic_operator)
    - [Writing C code](#c_code_basic)
    - [ASCII Code Example](#basic_ascii_code)
    - [Control Statement](#basic_control_statement)
    - [if-statement](#basic_control_statement_if)
    - [loop-statement](#basic_control_statement_loop)
    - [Pattern Loop Questions](#basic_loop_pattern)
    - [switch-statement](#basic_control_statement_switch)
    - [break and continue](#basic_control_statement_break_continue)
    - [Format Specifiers](#basic_format_specifiers)
2. [Function in C](#function_in_c)
    - [Types of functions](#types_of_function)
    - [Function Features](#features_of_function)
    - [Writing Function Code](#function_code)
    - [Recursion](#functions_with_recursion)
    - [Recursion Example](#functions_with_recursion_example)
    - [Call by value and reference](#call_by_val_ref)
    - [Scope](#scope_in_c)
3. [Arrays in C](#arrays_in_c)
    - [Implementing arrays](#impl_arrays)
    - [Passing array to functions](#array_func)
    - [Writing Array code](#array_code)
    - [2D](#array_2d)
    - [Assigning Values to a 2D Array](#array_2d_assign)
    - [Writing 2D array code](#array_2d_code)
4. [Structure in C](#structure_in_c)
    - [Declaration of Structure Variable](#structure_decl)
    - [Arrays of structure](#structure_array)
    - [Passing structure to functions](#structure_passing_to_function)
    - [Nested structure](#structure_nested)
    - [Writing Structure Code](#structure_code)
5. [Strings](#strings_in_c)
    - [Passing Strings to Functions](#strings_passing_to_function)
    - [Predefined string functions](#string_funtions)
    - [Writing string functions](#string_code)
6. [File Handling](#file_handling_in_c)
    - [Why do we need file handling?](#file_handling_need)
    - [Types of files](#file_handling_type)
    - [File Handling Functions](#file_handling_function)
    - [Opening Modes](#file_handling_mode)
    - [Writing Code](#file_handling_code)
7. [Questions](#questions)

## Basic Of C Language <a name="basic_of_c_language"></a>
- C is a general-purpose programming language created by Dennis Ritchie at the Bell Laboratories in the early 1970s.
- C is a structured programming language.
- **Identifiers:** Names that we define to refer to something, and it's user-defined.
- **Keywords:** Name that are defined by the programming language, creator.
- **Tokens:** Smallest unit of a programming language.
- It only has 32 keywords.

```c
int main()
{
    char *name = "something";
    return 0;
}
```
> `main, name` they are identifiers.
> `return, int, char` they are keywords,
> `0, "something"` they are litrals, integer and string.

### Keywords <a name="keywords"></a>
| one       | two       | three     |
|-----------|-----------|-----------|
| auto      | double    | int       |
| struct    | break     | else      |
| long      | switch    | case      |
| enum      | register  | union     |

### interpreter vs compiler <a name="interpreter_vs_compiler"></a>
| Interpreter                                                                                                                                           | Compiler                                                                                                                                                 |
|-------------------------------------------------------------------------------------------------------------------------------------------------------|----------------------------------------------------------------------------------------------------------------------------------------------------------|
| Translates program one statement at a time.                                                                                                           | Scans the entire program and translates it as a whole into machine code.                                                                                 |
| Interpreters usually take less amount of time to analyze the source code. However, the overall execution time is comparatively slower than compilers. | Compilers usually take a large amount of time to analyze the source code. However, the overall execution time is comparatively faster than interpreters. |

### Operators <a name="basic_operator"></a>
|   Operator |                  Description             |           Example         |
|------------|------------------------------------------|---------------------------|
|   +        |      Adds two operands.                  |           A + B = 30      |
|   −        |      Subtracts operand from the first.   |           A − B = -10     |
|   *        |      Multiplies both operands.           |           A * B = 200     |
|   /        |      Divides numerator by de-numerator.  |           B / A = 2       |
|   %        |      Modulus Operator.                   |           B % A = 0       |

### Writing C Code <a name="c_code_basic"></a>

> variable declration (*one way*)
```c
#include <stdio.h>

int main()
{
    int number1;
    int number2;
    int number3;
}
```

> variable declration (*another way*)
```c
#include <stdio.h>

int main()
{
    int number1, number2, number3;
}
```

> operator use-case
```c
#include <stdio.h>

int main(void)
{
    int a = 10;

    // add
    a += 10; a = a + 10;

    // sub
    a -= 10; a = a - 10;

    // mul
    a *= 10; a = a * 10;

    // div => quotent
    a /= 10; a = a / 10;

    // mod => remainder
    a %= 10; a = a % 10;
}
```

> `scanf(fmt*, __VA_ARGS__);` it will take the content from the standard input / stdin.
> `printf(fmt*, __VA_ARGS__);` it will flush the content to the standard output / stdout.
```c
#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d\n", a);
}
```

### ASCII Code Example (lower to upper, upper to lower) <a name="basic_ascii_code"></a>
> *NOTE* minus for `lower to upper` and plus for `upper to lower`.
```c
#include <stdio.h>

int main()
{
    char a = 'A';
    char b = 'a';

    // upper to lower, add
    printf("%c\n", (char)(a + 32));

    // lower to upper, minus
    printf("%c\n", (char)(b - 32));

    return 0;
}
```

### Control Statement <a name="basic_control_statement"></a>

- Types Of Statements:
    - **Expression Statements:** it is combination of variables, Constants, operators, Function Calls and followed by a semicolon.
    - **Compound Statements:** Compound statement is combination of several expression statements. Compound Statement is Enclosed within the Braces { }.
    - **Selection Statements:** Selection Statements are used in decisions making situation
    - **Iterative Statements:** These are also Called as Loops. If we want to Execute a part of program many times we will use loops.
    - **Jump Statements:** These are Unconditional statements Jump statements are useful for Transfer the Control one part of program to other part of Program there are few Jump Statements in C goto

> Code to explain `if`, `while`, `do-while`, 'for', `nested-if`, `switch`.

### `if` <a name="basic_control_statement_if"></a>
```C
#include <stdio.h>

int main()
{
    int a = 10, b = 20, c = 30;
    if ( a > b )
    {
        if ( a > c ) printf("a is the largest.");
        else printf("c is the largest.");
    }
    else
    {
        if ( b > c ) printf("b is the largest.");
        else printf("c is the largest.");
    }
}
```

### `loop` <a name="basic_control_statement_loop"></a>
```C
#include <stdio.h>

int main()
{
    int i = 0;

    for (int i = 0; i < 10; i++) printf("%d\n", i);

    while (i < 10)
    {
        printf("%d\n", i);
        i++;
    }

    do {
        printf("%d\n", i);
        i--;
    } while (i > 0);
}
```

### Pattern Loop Questions <a name="basic_loop_pattern"></a>
- [Right Half Pyramid Pattern](#blp_1)
- [Left Half Pyramid Pattern](#blp_2)
- [Full Pyramid Pattern](#blp_3)
- [Inverted Full Pyramid Pattern](#blp_4)

<a name="blp_1"></a>
```
*
* * 
* * *
* * * *
* * * * *
```

```c
#include <stdio.h>

int main()
{
	int rows = 5;

	for (int i = 0; i < rows; i++) {

		for (int j = 0; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
```

<a name="blp_2"></a>
```
        *
      * *
    * * *
  * * * *
* * * * *
```

```c
#include <stdio.h>

int main()
{
	int rows = 5;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < 2 * (rows - i) - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
```

<a name="blp_3"></a>
```
         *
       * * *      
     * * * * *    
   * * * * * * *  
 * * * * * * * * *
```

```c
#include <stdio.h>

int main()
{
	int rows = 5;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < 2 * (rows - i) - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2 * i + 1; k++) {
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
```

### `switch` <a name="basic_control_statement_switch"></a>
```C
#include <stdio.h>

int main()
{
    char a = 'r';
    switch (a)
    {
        case 'a': printf("no the case"); break;
        case 'b': printf("no the case"); break;
        case 'r': printf("it is the case"); break;
        defualt: printf("shit.");
    }
}
```

### Break and Continue <a name="basic_control_statement_break_continue"></a>
- **break** => it'll exit out of the loop.
- **continue** => it'll skip the iteration.

### Format Specifiers <a name="basic_format_specifiers"></a>
| Format Specifiers | Type of Output                      |
|-------------------|-------------------------------------|
| %d or %i          | A decimal integer or signed integer |
| %c                | Signed character                    |
| %f                | Signed float                        |
| %e                | A floating-point number             |
| %s                | A string or sequence of character   |
| %lf               | double                              |
| %Lf               | Long double                         |
| %o                | Octal integer                       |
| %u                | Short unsigned integer              |
| %ld               | Long decimal integer                |
| %x                | Hexadecimal integer                 |
| %p                | Print memory address in the hex.    |

## Function in C <a name="function_in_c"></a>
- A function is a group of statements that together perform a specific task.
- Every C program has at least one function, which is main(). 
- A function declaration tells the compiler about a function's name, return type, and parameters.
- A function definition provides the actual body of the function.
- A function can also be referred as a method or a sub-routine or a procedure, etc

### Types of function <a name="types_of_function"></a>
- [Standard library functions](#stdlib)
- [User-defined function](#user-defined)

### Standard library functions <a name="stdlib"></a>
- The standard library functions are built-in functions in C programming.
- These functions are defined in header files.
- **Example:** `scanf()`, `printf()`, `gets()`, `puts()`, `ceil()`, `floor()`

### User-defined functions <a name="user-defined"></a>
- You can also create functions as per your need.
- Such functions created by the user are known as user-defined functions.

### Features of function <a name="features_of_function"></a>
- **Function declaration:** A function must be declared globally in a c program to tell the compiler about the function name, function parameters, and return type.
- **Function call:** Function can be called from anywhere in the program. The parameter list must not differ in function calling and function declaration. We must pass the same number of functions as it is declared in the function declaration.
- **Function definition:** It contains the actual statements which are to be executed. It is the most important aspect to which the control comes when the function is called. Here, we must notice that only one value can be returned from the function.

> Function declaration, with and without parameters.
```c
int add();
int add(int, int);
int add(int a, int b);
```

> Function call, with and without parameters.
```c
add();
add(10, 20);
```

> Function definition, with and without parameters.
```c
int add(int a, int b)
{
    return a+b;
}
```

### Writing Function Code <a name="function_code"></a>
- [Function Basics](#f_1)
- [Armstrong](#f_2)
- [Convert time in minutes](#f_3)

### Function basic <a name="f_1"></a>
```c
#include <stdio.h>

int add(int, int); // function declaration

int main()
{
    int result = add(10, 20); // function call
    printf("%d\n", result);

    return 0;
}

int add(int a, int b) // function definition
{
    return a + b;
}
```

### Armstrong number <a name="f_2"></a>
```c
#include <stdio.h>
#include <math.h>

int armstrong(int n)
{
    int length = 0, lc = n;
    while (lc != 0)
    {
        length++;
        lc /= 10;
    }

    int res = 0, nc = n;
    while (nc != 0)
    {
        int rem = nc % 10;
        res = res + ((int)pow((double)rem, (double)length));
        nc /= 10;
    }

    return (res == n);
}

int main()
{
    int n;
    printf("Number: ");
    scanf("%d", &n);
    int res = armstrong(n);
    if (res) printf("%d is armstrong.\n", n);
    else printf("%d is not armstrong.\n", n);
}
```

### Convert time in minutes <a name="f_3"></a>
```c
#include <stdio.h>

int convert_time_in_mins(int hrs, int minutes);
int main()
{
    int hrs, minutes, total_mins;

    printf("Enter hours and minutes: ");
    scanf("%d%d", &hrs, &minutes);
    total_mins = convert_time_in_mins(hrs, minutes);
    printf("Total minutes = %d\n", total_mins);

    return 0;
}

int convert_time_in_mins(int hrs, int minutes)
{
    int mins;
    mins = hrs * 60 + minutes;
    return mins;
}
```

### Recursion <a name="functions_with_recursion"></a>
- Recursion is the technique of making a function call itself.
- It also allocates memory via calling itself, into the stack.

### Recursion Example <a name="functions_with_recursion_example"></a>
- [Factorial](#fr_1)
- [Fibonacci](#fr_2)
- [Sum](#fr_3)

### Factorial <a name="fr_1"></a>
```c
#include <stdio.h>

int fact(int n)
{
    if (n <= 1) return 1;
    return n * fact(n - 1);
}

int main(void)
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("%d\n", fact(n));

    return 0;
}
```

### Fibonacci <a name="fr_2"></a>
```c
#include <stdio.h>

int fib(int n)
{
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

int main(void)
{
    int a = 6;
    printf("%d\n", fib(a));

    return 0;
}
```

### Sum <a name="fr_3"></a>
```c
#include <stdio.h>

int sum(int n)
{
    if (n == 0) return 0;
    return n + sum(n - 1);
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("%d\n", sum(n));

    return 0;
}
```

### C Function Calling Methods <a name="call_by_val_ref"></a>
- Functions can be invoked in two ways: Call by Value or Call by Reference.

- [Call by value](#call_by_value)
- [Call by reference](#call_by_ref)

### Call by Value <a name="call_by_value"></a>
- In this parameter passing method, values of actual parameters are copied to function’s formal parameters.
- Any changes made inside functions are not reflected in actual parameters of the caller.

```c
#include <stdio.h>

void increment_val(int n)
{
    n++;
    printf("increment_val(): %d\n", n);
}

int main()
{
    int n = 10;

    printf("main(): %d\n", n);
    increment_val(n);
    printf("main(): %d\n", n);
}
```

### Call by reference <a name="call_by_ref"></a>
- Both the actual and formal parameters refer to the same locations
- Any changes made inside the function are actually reflected in actual parameters of the caller.
- `*` to initiate pointer, `&` to get address.

```c
int a = 10;
int *ptr = &a;

a = 20;     // a = 20
*a = 10;    // err: cannot derefrence, because `a` is a variable not a pointer.
ptr = 233;  // it'll change the address that ptr was locating to.
*ptr = 30;  // a = 30;
```

```c
#include <stdio.h>

void increment_ptr(int *n)
{
    *n += 1;
    printf("increment_ptr(): %d\n", *n);
}

int main()
{
    int n = 10;

    printf("\nmain(): %d\n", n);
    increment_ptr(&n);
    printf("main(): %d\n", n);
}
```

### Scope <a name="scope_in_c"></a>
- A scope in any programming is a region of the program where a defined variable can have its existence and beyond that variable it cannot be accessed.

- **Local Variables:**
* Variables that are declared inside a function or block are called local variables.
* They can be used only by statements that are inside that function or block of code.
* Local variables are not known to functions outside their own.

- **Global Variables:**
* Global variables are defined outside a function, usually on top of the program.
* Global variables hold their values throughout the lifetime of your program and they can be accessed inside any of the functions defined for the program.

```c
int a = 10; // global

int main()
{
    int b = a; // local
}
```

## Arrays <a name="arrays_in_c"></a>
- It is a collection of similar type of data which can be either of int, float, double, char (String), etc.
- All the data types must be same. 
- For example, we can't have an array in which some of the data are integer and some are float. 

### Implementing Arrays <a name="impl_arrays"></a>
- [How to declare an array?](#array_decl)
- [Index of an array](#array_idx)
- [Printing element of an array](#array_printing)

### How to declare an array? <a name="array_decl"></a>
- We need to give the size of the array because the complier needs to allocate space in the memory which is not possible without knowing the size.
- Compiler determines the size required for an array with the help of the number of elements of an array and the size of the data type present in the array.
```c
int array[];                    // it won't work as compiler yell to specify size.
int array[5];                   // it'll define array with size of 5.
int array[] = { 10, 20, 30 };   // compiler automatically define size, 3.
int array[3] = { 10, 20, 30 };  // here, we deifine size and elements.
int array[100] = { 0 };         // it'll 100 elements with 0s.
int *array;                     // we can also use pointer as an place of defining array.
```

### Index of an array <a name="array_idx"></a>
```c
int array[5] = { 10, 20, 30, 40, 50 };
```

| **ELEMENTS**  | 10 | 20 | 30 | 40 | 50 |
|-----------|----|----|----|----|----|
| **INDEX**     | 0  | 1  | 2  | 3  | 4  |

* accessing elements: `arrray[ index ]`.

### Printing element of an array <a name="array_printing"></a>

```c
#include <stdio.h>

int main()
{
    int array[5] = { 10, 20, 30, 40, 50 };
    for (int i = 0; i < 5; i++) printf("%d ", array[i]);
    printf("\n");
}
```

### Array passing to functions <a name="array_func"></a>
```c
#include <stdio.h>

void print(int size, int array[size]);  // size is defined with the array.
void print(int array[]);                // size is not defined, either it should be global or known by the programmer.
void print(int *array, int size);       // pointered array, same as string.

int main()
{
    int array[] = { 10, 20, 30, 40, 50 };
    print(5, array);
    print(array);
    print(array, 5);
}
```

### Writing Array Code <a name="array_code"></a>
- [Linear Search](#array_lnsch)
- [Bubble Sorting](#array_bblsort)
- [Reverse](#array_reverse)
- [Find min max](#array_minmax)

### Linear Search <a name="array_lnsch"></a>
```c
#include <stdio.h>

int main()
{
    int array[] = { 10, 20, 30, 40, 50 };
    int target = 30;
    
    for (int i = 0; i < 5; i++)
    {
        if (array[i] == target)
        {
            printf("found value at %d.", i);
            break;
        }
    }

    return 0;
}
```

### Bubble Sorting <a name="array_bblsort"></a>
```c
#include <stdio.h>

int main()
{
    int array[5] = { 4, 1, 3, 5, 2 };

    printf("values before: ");
    for (int i = 0; i < 5; i++) printf("%d ", array[i]);

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (array[i] < array[j])
            {
                int temp = array[i];
                array[i] = array[j], array[j] = temp;
            }

    printf("values after: ");
    for (int i = 0; i < 5; i++) printf("%d ", array[i]);
}
```
### Reverse <a name="array_reverse"></a>
```c
#include <stdio.h>

int main()
{
    int array[] = { 10, 20, 30, 40, 50 };

    printf("values before: ");
    for (int i = 0; i < 5; i++) printf("%d ", array[i]);

    for (int i = 0; i < ( 5 / 2 ); i++)
    {
        int temp = array[5 - i - 1];
        array[5 - i - 1] = array[i];
        array[i] = temp;
    }

    printf("\nvalues after: ");
    for (int i = 0; i < 5; i++) printf("%d ", array[i]);

    return 0;
}
```
### Find min max <a name="array_minmax"></a>
```c
#include <stdio.h>

int main()
{
    int a[10];

    printf("Enter 10 values: ");
    for (int i = 0; i < 10; i++) scanf("%d", &a[i]);

    int min = a[0], max = a[0];
    int imax = 0, jmin = 0;
    for (int i = 0; i < 10; i++)
    {
        if (min > a[i]) min = a[i], imax = i;
        if (max < a[i]) max = a[i], jmin = i;
    }

    printf("min: %d at position: %d, max: %d at position: %d\n",
            min, imax, max, jmin);

    return 0;
}
```

### 2-D <a name="array_2d"></a>
- 2D array are generally known as, `Matrix`.

```
--                          --
|    10      20      30      |
|    40      50      60      |
|    43      23      54      |
--                          --
```

```c
int array[3][3] = {
    { 10, 20, 30 },
    { 40, 50, 60 },
    { 43, 23, 54 }
};
```

|      r  o  w      |       clm0        |       clm1        |       clm2        |
|-------------------|-------------------|-------------------|-------------------|
|        row0       |        10         |        20         |        30         |
|        row1       |        40         |        50         |        60         |
|        row2       |        43         |        23         |        54         |

### Assigning Values to a 2D Array <a name="array_2d_assign"></a>
- Same as in one-dimensional array, we can assign values to the elements of a 2-dimensional array in 2 ways as well.
- `array[0][0]` we can assign each elements.
- First index is for row, and second one is for column.

```c
int array[3][3] = { 0 };
array[0][2] = 10;
array[2][1] = 20;
```

```
--                          --
|     0       0      10      |
|     0       0       0      |
|     0      20       0      |
--                          --
```

### Array 2D Code <a name="array_2d_code"></a>
- [2D array implementation](#2d_array_impl)
- [2D array addition](#2d_array_impl_add)
- [2D array multiplication](#2d_array_impl_mul)

### 2D array implementation <a name="2d_array_impl"></a>
```c
#include <stdio.h>

int main()
{
    int m, n;

    printf("M x N: ");
    scanf("%d%d", &m, &n);

    int array[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) scanf("%d", &array[i][j]);
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) printf("%d ", array[i][j]);
        printf("\n");
    }
}
```

### 2D array addition <a name="2d_array_impl_add"></a>
```c
#include <stdio.h>

int main()
{
    int m, n;

    printf("M x N: ");
    scanf("%d%d", &m, &n);

    int mat1[m][n];
    int mat2[m][n];
    int mat3[m][n];

    printf("Enter elements for matrix one: %d", m * n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) scanf("%d", &mat1[i][j]);
    }

    printf("Enter elements for matrix one: %d", m * n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) scanf("%d", &mat2[i][j]);
    }

    printf("printing elements for matrix one: %d", m * n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) printf("%d ", mat1[i][j]);
        printf("\n");
    }

    printf("printing elements for matrix two: %d", m * n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) printf("%d ", mat2[i][j]);
        printf("\n");
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) mat3[i][j] = mat1[i][j] + mat2[i][j];
    }

    printf("printing elements for result matrix: %d", m * n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) printf("%d ", mat3[i][j]);
        printf("\n");
    }
}
```

### 2D array multiplication <a name="2d_array_impl_mul"></a>
```c
#include <stdio.h>

int main()
{
    int m, n, p, q;

    printf("MxN: "); scanf("%d%d", &m, &n);
    printf("PxQ: "); scanf("%d%d", &p, &q);

    int a[m][n], b[p][q], c[m][q];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d]: ", i, j); scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("b[%d][%d]: ", i, j); scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < p; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++) printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}
```

## Structure in c <a name="structure_in_c"></a>
- We use structures to store data of different types. For example, you are a student. 
- Your name is a string and your phone number and `roll_no` are integers. 
- So, here name, address and phone number are those different types of data.

```c
struct structure_name
{
    char *name;
    int roll_no;
    long int phone_no;
};
```

### Declaration of Structure Variable <a name="structure_decl"></a>
- Just as we declare variables of type int, char etc, we can declare variables of structure as well.

```c
// declaration and define
struct student
{
  int roll_no;
  char name[30];
  int phone_number;
};

// declaration and define
struct student
{
  int roll_no;
  char name[30];
  int phone_number;
}p1, p2, p3; // define variable

main()
{
  struct student p1, p2, p3; // define variable
}
```

### Arrays of structure <a name="structure_array"></a>
```c
struct student
{
  char name[30];
  int phone_number;
};

main()
{
    struct student variable[4];         // 4, structure.
    struct student one = variable[0];   // we can access them as usual array elements.
}
```

### Passing structure to function <a name="structure_passing_to_function"></a>
```c
void print_value(struct student a);
int main()
{
    struct student a;
    print_value(a);
}
```

### Nested structure <a name="structure_nested"></a>
```c
struct students
{
    struct names {
        char *a;
        char *b;
    } name;
    int roll_no;
};
```

### Writing Structure Code <a name="structure_code"></a>
```c
#include <stdio.h>

struct info
{
    char name[128];
    int maths;
    int physics;
    int cs;
};

int main()
{
    int n = 50;
    struct info v[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%s%d%d%d", v[i].name, &v[i].maths, &v[i].physics, &v[i].cs);
    }

    for (int i = 0; i < n; i++)
    {
        printf("name: %s, maths: %d, physics: %d, cs: %d, avg: %d\n", v[i].name, v[i].maths, v[i].physics, v[i].cs, ((v[i].maths + v[i].physics + v[i].cs) / 3));
    }
    return 0;
}
```

## Strings <a name="strings_in_c"></a>
- Strings in C language are an array of characters ended with null characters `('\0')`.
- The null character at the end of a string indicates its end and the strings are always enclosed by double quotes.
- In C language characters are enclosed by single quotes.

```c
char string[6]  = { 'r','a','h','u','l','\0' };
char string[6]  = "rahul";
char string[]   = "rahul";
char *string    = "rahul";
```

- There is a minor difference between the declarations of the strings in both of the above statements.
- Like when we declare char as string[10], 10 bytes of memory space gets allocated to hold the 10 values of string, while when we declare it like string[] then memory gets allocated at the time of execution of the program.

### Passing Strings to Functions <a name="strings_passing_to_function"></a>
- This is done in the same as we do with other arrays. The only difference is that this is an array of characters.

```c
void print(char *string);
int main()
{
    char *name = "rahul";
    print(name);
}
```

### Predefined string functions <a name="string_funtions"></a>
- We can perform different kinds of string functions like joining of 2 strings, comparing one string with another or finding the length of the string.

| Function | Use                                      |
|----------|------------------------------------------|
| strlen   | calculates the length of string          |
| strcat   | Appends one string at the end of another |
| strcpy   | Copies a string into another             |
| strcmp   | Compares two strings                     |

| Function | Checks whether entered character is      |
|----------|------------------------------------------|
| isalpha  | An alphabet (or) not                     |
| isdigit  | A digit (or) not                         |
| isspace  | A space, a newline (or) tab              |
| ispunct  | A special symbol (or) not                |
| islower  | A lower case letter of alphabet          |
| isupper  | An upper case letter of alphabet         |

```c
char a[] = "hello";
int size = strlen(a);
char b[size];
strcpy(b, "world");
strcat(b, a);
int c = strcmp(a, b);
```

### Writing string code <a name="string_code"></a>
- [Using string functions](#string_functions)
- [Using string boolean function](#string_bool_functions)

### Using string functions <a name="string_functions"></a>
```c
#include <stdio.h>
#include <string.h>

int main()
{
    char *a = "Hello, ";
    char *b = "World!";

    printf("%s, %s\n", a, b);

    int a_size = strlen(a);
    int b_size = strlen(b);

    printf("Length of a: %d, Length of b: %d\n", a_size, b_size);

    char c[ a_size + b_size ]; // `c` is a size of a + b;

    strcpy(c, a); // `c` <- `a`, copy from a to c.
    printf("%s\n", c);

    strcat(c, b); // `c` <- `b`, join data from a to c.
    printf("%s\n", c);

    if ( strcmp(a, b) ) printf("They are not equal.");
    else printf("They are equal.");

    return 0;
}
```

### Using string boolean function <a name="string_bool_functions"></a>
```c
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char *string = "Hello, World... testing 1... 2... 3...";

    for (int i = 0; i < strlen(string); i++)
    {
        char e = string[i];

        if (isupper(e)) printf("`%c`, is upper. ", e);
        if (islower(e)) printf("`%c`, is lower. ", e);
        if (isalpha(e)) printf("`%c`, is alpha. ", e);
        if (isdigit(e)) printf("`%c`, is digit. ", e);
        if (isspace(e)) printf("`%c`, is space. ", e);
        if (ispunct(e)) printf("`%c`, is punct. ", e);
        if (isalnum(e)) printf("`%c`, is alnum. ", e);

        printf("\n");
    }

    return 0;
}
```

## File Handling <a name="file_handling_in_c"></a>
File handling refers to the method of storing data in the C program in the form of an output or input that might have been generated while running a C program in a data file, i.e., a binary file or a text file for future analysis and reference in that very program.

### Why Do We Need File Handling in C? <a name="file_handling_need"></a>
- There are times when the output generated out of a program after its compilation and running do not serve our intended purpose.
- In such cases, we might want to check the program’s output various times.
- Now, compiling and running the very same program multiple times becomes a tedious task for any programmer.
- It is exactly where file handling becomes useful.

- **Reusability:** File handling allows us to preserve the information/data generated after we run the program.
- **Saves Time:** Some programs might require a large amount of input from their users. In such cases, file handling allows you to easily access a part of a code using individual commands.
- **Commendable storage capacity:** When storing data in files, you can leave behind the worry of storing all the info in bulk in any program.
- **Portability:** The contents available in any file can be transferred to another one without any data loss in the computer system. This saves a lot of effort and minimises the risk of flawed coding.

### Types of Files in a C <a name="file_handling_type"></a>
- [Text file](#file_handling_text)
- [Binary file](#file_handling_binary)

### Text file <a name="file_handling_text"></a>
- The text files are the most basic/simplest types of files that a user can create in a C program.
- We create the text files using an extension `.txt` with the help of a simple text editor.
- In general, we can use notepads for the creation of `.txt` files.
- These files store info internally in ASCII character format, but when we open these files, the content/text opens in a human-readable form.

### Text binary <a name="file_handling_binary"></a>
- The binary files store info and data in the binary format of 0’s and 1’s (the binary number system).
- Thus, the files occupy comparatively lesser space in the storage.
- In simpler words, the binary files store data and info the same way a computer holds the info in its memory.
- Thus, it can be accessed very easily as compared to a text file.

### File Handling Functions <a name="file_handling_function"></a>
- We can use a variety of functions in order to open a file, read it, write more data, create a new file, close or delete a file, search for a file, etc.

| **Description of Function**                                    | **Function in Use**     |
|------------------------------------------------------------|---------------------|
| used to open an existing file or a new file                | fopen()             |
| writing data into an available file                        | fprintf()           |
| reading the data available in a file                       | fscanf()            |
| writing any character into the program file                | fputc()             |
| reading the character from an available file               | fgetc()             |
| used to close the program file                             | fclose()            |
| used to set the file pointer to the intended file position | fseek()             |

### Opening Modes <a name="file_handling_mode"></a>
| Mode in Program | Meaning of Mode                                                                                                                                  | When the file doesn’t exist                                                                                                                      |
|-----------------|--------------------------------------------------------------------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------------------------------------------------|
| r               | Open a file for reading the content.                                                                                                             | In case the file doesn’t exist in the location, then fopen() will return NULL                                                                    |
| rb              | Open a file for reading the content in binary mode.                                                                                              | In case the file doesn’t exist in the location, then fopen() will return NULL.                                                                   |
| w               | Open a file for writing the content.                                                                                                             | In case the file exists, its contents are overwritten. In case the file doesn’t exist in the location, then it will create a new file.           |
| wb              | Open a file for writing the content in binary mode.                                                                                              | In case the file exists, then its contents will get overwritten. In case the file doesn’t exist in the location, then it will create a new file. |
| a               | Open a file for appending the content. Meaning, the data of the program is added to the file’s end in a program.                                 | In case the file doesn’t exist in the location, then it will create a new file.                                                                  |
| ab              | Open a file for appending the content in binary mode. Meaning, the data of the program is added to the file’s end in a program in a binary mode. | In case the file doesn’t exist in the location, then it will create a new file.                                                                  |
| r+              | Open a file for both writing and reading the content.                                                                                            | In case the file doesn’t exist in the location, then fopen() will return NULL.                                                                   |
| rb+             | Open a file for both writing and reading the content in binary mode.                                                                             | In case the file doesn’t exist in the location, then fopen() will return NULL.                                                                   |
| w+              | Open a file for both writing and reading.                                                                                                        | In case the file exists, its contents are overwritten. In case the file doesn’t exist in the location, then it will create a new file            |
| wb+             | Open a file for both writing and reading the content in binary mode.                                                                             | In case the file exists, its contents are overwritten. In case the file doesn’t exist in the location, then it will create a new file.           |
| a+              | Open a file for both appending and reading the content.                                                                                          | In case the file doesn’t exist in the location, then it will create a new file.                                                                  |
| ab+             | Open a file for both appending and reading the content in binary mode.                                                                           | In case the file doesn’t exist in the location, then it will create a new file.                                                                  |

### Writing Code <a name="file_handling_code"></a>
- [Reading information from a text file](#file_handling_code_p1)
- [Writing data to the text file in a program](#file_handling_code_p2)

### Reading File <a name="file_handling_code_p1"></a>
```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file = fopen("a.txt", "r"); // read file, with `r` mode.

    if (file == NULL) printf("err: file error."), exit(0); // check if it's null

    int len; // length of the file.

    fseek(file, 0L, SEEK_END);  // take cursor to the end.
    len = ftell(file);          // get from 0 to the end `n`, which will be length of the file.
    fseek(file, 0L, SEEK_SET);  // take cursor to the start again.

    char buffer[len];           // define buffer of that `len` size.
    fread(buffer, sizeof(char), len, file); // copy data from file to the buffer.

    printf("%s\n", buffer); // print as string.

    fclose(file); // close the file

    return 0;
}
```

### Writing File <a name="file_handling_code_p2"></a>
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *file = fopen("a.txt", "w"); // read file, with `r` mode.

    if (file == NULL) printf("err: file error."), exit(0); // check if it's null

    char write_out[] = "something something";   // define data
    int len = strlen(write_out);                // define size
    
    fwrite(write_out, sizeof(char), len, file); // write data into the file.

    fclose(file); // close the file

    return 0;
}
```

## Questions <a name="questions"></a>
- What is the difference between Control Statement and Selection Statement?
- How to skip an iteration?
- Define `break` and `continue` with example?
- List out format specifier with definition.
- Types of functions, explain in breif with example.
- Write a program for armstrong number.
- What is Recursion, difference between Recursion and Loop?
- Write a program for Fibonacci.
- What is call by reference? and how it's different from call by value?
- Define scope with example?
- Output of the code.
```c
int num[] = { 5, 3, 4, 2 };
int a = num[4];
printf("%d\n", a);
```
- What is 2D array, write code for 2D array.
- What is structure in C, define nested structure.
- Write code for passing array to the function.
- List out string functions, with example.
- What does `strcmp` do?
- What is file handling?
- Why do we need file handling?
- Types of files?
- List out modes in file handling in C.
- Difference between `fprintf()` and `printf()`.
- Write code to read file.
- Write code to write file.
- Functions in file handling.
