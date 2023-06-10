- %d, %i, %f.. write notes

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
| auto     | double   | int      | struct   |
| break    | else     | long     | switch   |
| case     | enum     | register | union    |

### interpreter vs compiler <a name="interpreter_vs_compiler"></a>
|               Interpreter             |               Compiler                |
|---------------------------------------|---------------------------------------|
|  Translates program one statement     |  Scans the entire program and         |
|  at a time.                           |  translates it as a whole into        |
|                                       |  machine code.                        |
|                                       |                                       |
|  Interpreters usually take less       |  Compilers usually take a large       |
|  amount of time to analyze the        |  amount of time to analyze the        |
|  source code. However, the overall    |  source code. However, the overall    |
|  execution time is comparatively      |  execution time is comparatively      |
|  slower than compilers.               |  faster than compilers.               |

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
