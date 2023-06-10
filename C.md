# Table of contents
1. [Basic of C Language](#basic_of_c_language)
    1. [Keywords](#keywords)
    2. [Interpreter vs Compiler](#interpreter_vs_compiler)
    3. [Operator](#basic_operator)
    4. [Writing C code](#c_code_basic)
    5. [Control Statement](#basic_control_statement)
    6. [if-statement](#basic_control_statement_if)
    7. [loop-statement](#basic_control_statement_loop)
    8. [switch-statement](#basic_control_statement_switch)
    9. [break and continue](#basic_control_statement_break_continue)
    10. [Format Specifiers](#basic_format_specifiers)
2. [Function in C](#function_in_c)
    1. [Types of functions](#types_of_function)
    2. [Function Features](#features_of_function)
    3. [Writing Function Code](#function_code)
    4. [Recursion](#functions_with_recursion)
    5. [Recursion Example](#functions_with_recursion_example)
    6. [Call by value and reference](#call_by_val_ref)
    7. [Scope](#scope_in_c)

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

### Control Statement <a name="basic_control_statement"></a>

- Types Of Statements:
    - **Expression Statements:** it is combination of variables, Constants, operators, Function Calls and followed by a semicolon.
    - **Compound Statements:** Compound statement is combination of several expression statements. Compound Statement is Enclosed within the Braces { }.
    - **Selection Statements:** Selection Statements are used in decisions making situation
    - **Iterative Statements:** These are also Called as Loops. If we want to Execute a part of program many times we will use loops.
    - **Jump Statements:** These are Unconditional statements Jump statements are useful for Transfer the Control one part of program to other part of Program there are few Jump Statements in C goto

> Code to explain `if`, `while`, `do-while`, 'for', `nested-if`, `switch`.

- `if` <a name="basic_control_statement_if"></a>
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

- `loop` <a name="basic_control_statement_loop"></a>
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

- `switch` <a name="basic_control_statement_switch"></a>
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

    int f = 0, s = 1;

    for (int i = 0; i <= a; i++)
    {
        printf("%d ", f);

        int n = f + s;
        f = s;
        s = n;
    }

    return 0;
}
```

### Sum <a name="fr_3"></a>
```c
#include <stdio.h>

int sum(int n)
{
    if (n == 0) return 0;
    return n * sum(n - 1);
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
