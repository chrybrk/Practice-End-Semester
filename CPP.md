# Table of contents

1. [Introduction to C++](#unit1)
    - [Concept of oops](#concept_of_oops)
    - [Difference between oop and pop](#pop_vs_oop)
    - [I/O Operators](#io_operator)
    - [Scope Resolution](#scope)
    - [Memory Management](#mem)

2. [Functionality of C++](#unit2)
    - [Functions](#functions)
    - [Inline Function](#inline_function)
    - [Default arguments](#def_args)
    - [Function Overloading](#function_overloading)
    - [Structure vs Class](#struct_vs_class)
    - [Concept of Class and Object](#concept_of_class_and_object)
    - [Concept of Abstract Class / Virtual Function](#concept_of_abs_class)
    - [Friend Function](#friend_function)

3. [More about Class](#unit3)
    - [Constructor](#constructor)
    - [Destructor](#destructor)
    - [Opeartor Overloading](#op_overloading)

4. [Inheritance](#unit4)
    - [Define Inheritance](#def_inheritance)
    - [Types](#types_of_inhert)
    - [Private vs Public vs Protected](#mem_method)
    - [Multiple level and Multiple Base Inheritance](#mul_lvl_base)
    - [Nesting inside class?](#nesting)

## Introduction to C++ <a name="unit1"></a>

1.  General Overview:
    -   C++ is a general-purpose, high-performance programming language.
    -   It was developed by Bjarne Stroustrup at Bell Labs in the early 1980s as an extension of the C programming language.

2.  Object-Oriented Programming (OOP):
    -   C++ supports object-oriented programming paradigm.
    -   It allows for the creation and manipulation of objects, which are instances of user-defined classes.

3.  Classes and Objects: <a name="concept_of_oops"></a>
    -   Fundamental to C++ is the concept of classes and objects.
    -   Classes define the blueprint for objects, encapsulating data and methods.

4.  Inheritance:
    -   C++ supports inheritance, allowing a class to inherit properties and behaviors from another class.
    -   This promotes code reuse and the creation of a hierarchy of classes.

5.  Polymorphism:
    -   Polymorphism enables objects of different types to be treated as objects of a common base type.
    -   It includes features like function overloading and virtual functions.

6.  Encapsulation:
    -   Encapsulation refers to the bundling of data and methods that operate on the data into a single unit (class).
    -   It helps in data hiding and protecting the internal state of an object.

7.  Abstraction:
    -   Abstraction involves simplifying complex systems by modeling classes based on the essential properties and behaviors they share.
    -   It allows the programmer to focus on the relevant details while ignoring unnecessary complexities.

8.  Templates:
    -   C++ supports templates, allowing for the creation of generic functions and classes.
    -   This promotes code flexibility and reusability.

9.  Memory Management:
    -   C++ allows manual memory management using new and delete operators.
    -   It also supports automatic memory management through features like smart pointers.

### Difference between oop and pop <a name="pop_vs_oop"></a>

| Object-Oriented Programming (OOP)                                             | Procedural Programming (POP)                                |
|-------------------------------------------------------------------------------|-------------------------------------------------------------|
| Objects, Classes, Encapsulation, Inheritance, Polymorphism                    | Procedures, Functions, Global Data                          |
| Modeling real-world entities as objects and their interactions                | Sequences of actions, procedures, functions                 |
| Emphasizes encapsulation into classes                                         | Relies on global data and functions                         |
| Organized around objects and their interactions                               | Organized around procedures and functions                   |
| Encourages modularity through classes and encapsulation                       | Uses functions for modularity                               |
| Achieved through inheritance and composition                                  | Achieved through functions                                  |
| Provides flexibility through features like inheritance and polymorphism       | Can be less flexible, especially with large codebases       |
| Often considered more readable and maintainable, especially for large systems | May become harder to read and maintain as the program grows |
<hr>

### I/O Operators <a name="io_operator"></a>
- In C++, input and output operations are performed using the input/output stream classes provided by the Standard Template Library (STL).
- The most commonly used classes for input and output in C++ are `iostream`, `istream`, and `ostream`.
- The primary stream objects are `cin` for input and `cout` for output.

- **Example:**

```cpp

#include <iostream>

int main()
{
    std::string name;

    std::cin >> name;
    std::cout << name;

    return 0;
}

```

- **IMPORTANT NOTE:** Also, know that, the flow of stream changes with the function you are using. `>>` for `cin` and `<<` for `cout`.


### Scope Resolution <a name="scope"></a>

- The scope resolution operator (::) is used to qualify names and access members within a specific scope.

- [Global](#scope_0)
- [Namespace](#scope_1)
- [Defining Class Member Functions Outside the Class](#scope_2)

- **Global** <a name="scope_0"></a>

```cpp
#include <iostream>

int a = 10;

int main()
{
    std::cout << ::a << std::endl;

    return 0;
}
```

- **Namespace** <a name="scope_1"></a>

```cpp
#include <iostream>

namespace Box {
    int size = 10;
    std::string color = "pink";
}

int main()
{
    std::cout << Box::size << std::endl;
    std::cout << Box::color << std::endl;

    return 0;
}
```

- **Defining Class Member Functions Outside the class** <a name="scope_2"></a>

```cpp
#include <iostream>

class Box {
    public:
        int Size();
        const std::string Color();
};

int Box::Size()
{
    return 100;
}

const std::string Box::Color()
{
    return "red";
}

int main()
{

    return 0;
}
```

### Memory Management <a name="mem"></a>

- Memory management in C++ involves allocating and deallocating memory for variables and data structures during the program's execution.
- C++ provides several mechanisms for memory management, including manual memory management and automatic memory management through features like smart pointers and the Standard Template Library (STL) containers.

1. Manual Memory Management:

- `new` operator: Allocates memory on the heap.
- `delete` operator: Deallocates memory allocated with `new`.

```cpp
#include <iostream>

int main()
{
    int *value = new int(10);
    delete value;

    return 0;
}
```

2. Smart Pointers:

- Smart pointers are C++ objects that act like pointers but manage memory automatically.
- `std::unique_ptr`: Manages a single object and owns its memory.
- `std::shared_ptr`: Allows multiple smart pointers to share ownership of an object.

```cpp
#include <memory>

int main()
{
    std::unique_ptr<int> value0 = std::make_unique<int>(10);
    std::shared_ptr<int> value1 = std::make_shared<int>(10);

    return 0;
}
```

### Four types of Memeory Management

1.  Stack Allocation:
    -   Description:
    -       Stack allocation is the simplest form of memory management.
            Local variables are allocated on the stack, a region of memory managed by the compiler.
    -   Characteristics:
    -       Automatic management: Memory is automatically allocated and deallocated as functions are called and return.
            Fast access: Allocation and deallocation are fast.
            Limited lifetime: Variables have a limited lifetime, tied to the scope of the function in which they are declared.
    -   Use Cases:
    -       Suitable for short-lived variables with a well-defined scope.
            Often used for function parameters and local variables.

2.  Heap Allocation:
    -   Description:
    -       Heap allocation involves dynamic memory allocation on the heap, a region of memory managed at runtime.
            Memory is allocated using operators like new and deallocated using delete.
    -   Characteristics:
    -       Manual management: Requires manual allocation and deallocation.
            Extended lifetime: Memory persists until explicitly deallocated.
            Slower access: Dynamic allocation involves more overhead compared to stack allocation.
    -   Use Cases:
    -       Suitable for objects with a dynamic lifetime or unknown size.
            Allows for the creation of data structures with variable size or long-lasting objects.

3.  Smart Pointers:
    -   Description:
    -       Smart pointers are objects that act like pointers but manage memory automatically.
            `std::unique_ptr and std::shared_ptr` are common smart pointer types.
    -   Characteristics:
    -       Automatic management: Smart pointers automate memory management, providing automatic deallocation.
            Ownership semantics: `std::unique_ptr` for exclusive ownership, `std::shared_ptr` for shared ownership.
    -   Use Cases:
    -       Helps prevent memory leaks by automatically managing memory.
            Encourages safer and more readable code compared to manual memory management.

4.  Memory Pools:
    -   Description:
    -       Memory pools involve pre-allocating a fixed-size block of memory and managing it as a pool of reusable chunks.
            Often used in scenarios where frequent allocations and deallocations are required.
    -   Characteristics:
    -       Reduced fragmentation: Helps reduce memory fragmentation compared to frequent heap allocations.
            Faster allocation: Allocating from a pre-allocated pool is generally faster than dynamic allocation.
    -   Use Cases:
    -       Real-time systems where memory fragmentation needs to be minimized.
            Situations with a known maximum number of objects of a fixed size.

## Functionality of C++ <a name="unit2"></a>

### Functions <a name="functions"></a>

- Example:

```cpp
#include <iostream>

int sum(int, int);

int main()
{
    int result = sum(10, 20);
    std::cout << result << std::endl;

    return 0;
}


int sum(int a, int b)
{
    return a + b;
}
```

### Inline Function <a name="inline_function"></a>

- The inline keyword is used to suggest to the compiler that a function should be expanded in place (i.e., the function's code should be inserted at the point where the function is called) rather than being called as a separate function.
- This is a compiler optimization aimed at reducing the overhead of function calls for small, frequently used functions.

- Example:

```cpp
#include <iostream>

inline int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int result = sum(10, 20);
    std::cout << result;

    return 0;
}
```

- How it looks under the hood?

```cpp
#include <iostream>

int main()
{
    int result = 10 + 20; // removes the calling. just the actions
    std::cout << result;

    return 0;
}

```

- It removes the calling of function and only inherit the content of the function or just its actions.
- **IMPORTANT** It only works when compiled with, `g++ <filename> -O3`. `-O3` is meant for optimization.

### Default arguments <a name="def_args"></a>

- When functions already contains a default arguments, it is optional to pass the arguments. It would not cause any errors.
- `int sum(int a = 10);` here, when we will call `sum()` it will automatically take 10 as argument, if not provided explicitly.

- Example:

```cpp
#include <iostream>

int sum(int a = 10, int b = 20)
{
    return a + b;
}

int main()
{
    std::cout << sum() << std::endl;    // output: 30
    std::cout << sum(50, 50);           // output: 100

    return 0;
}
```

### Function Overloading <a name="function_overloading"></a>

- Changes in parameters of the function, and having `n` number of functions with same name, is called `function overloading`.
- Example:

```cpp
#include <iostream>

int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    int result1 = add(3, 4);
    std::cout << "Result 1: " << result1 << std::endl;

    int result2 = add(1, 2, 3);
    std::cout << "Result 2: " << result2 << std::endl;

    double result3 = add(2.5, 3.7);
    std::cout << "Result 3: " << result3 << std::endl;

    return 0;
}
```

### Structure vs Class <a name="struct_vs_class"></a>
|         **Feature**         |                    **Structure**                   |                                    **Class**                                    |
|:---------------------------:|:--------------------------------------------------:|:-------------------------------------------------------------------------------:|
| **Members Accessibility**   | All members are public by default.                 | Members can be private, protected, or public.                                   |
| **Member Functions**        | Cannot have member functions.                      | Can have member functions.                                                      |
| **Constructor/Destructor**  | Cannot have user-defined constructors/destructors. | Can have user-defined constructors/destructors.                                 |
| **Inheritance**             | Cannot be used for inheritance.                    | Can be used for inheritance.                                                    |
| **Access Specifiers**       | No access specifiers (public, private, protected). | Supports access specifiers.                                                     |
| **Member Initialization**   | Members are not automatically initialized.         | Members are automatically initialized (if default constructor is not provided). |
| **Default Access Modifier** | Default access modifier for members is public.     | Default access modifier for members is private.                                 |
| **Object Initialization**   | Members are initialized individually.              | Members are initialized collectively through constructors.                      |


### Concept of class and object <a name="concept_of_class_and_object"></a>

- A class is a user-defined data type that encapsulates data members (variables) and member functions (methods) to operate on that data.
- An object, on the other hand, is an instance of a class—a concrete realization of the class blueprint.

|         **Feature**        |                                   **Class**                                   |                                    **Object**                                    |
|:--------------------------:|:-----------------------------------------------------------------------------:|:--------------------------------------------------------------------------------:|
| **Definition**             | A user-defined data type that encapsulates data members and member functions. | An instance of a class; a concrete realization of the class blueprint.           |
| **Members**                | Contains data members (variables) and member functions (methods).             | Represents a single instance of the class and holds values for the data members. |
| **Access Specifiers**      | public, private, protected control member visibility within the class.        | N/A (Access specifiers are relevant within the class definition).                |
| **Instantiation**          | Not instantiated by itself; serves as a blueprint for objects.                | Created by instantiating the class using its name.                               |
| **Memory Consumption**     | Does not consume memory until an object is created.                           | Consumes memory when instantiated as an object.                                  |
| **Accessing Members**      | Accessed using the scope resolution operator :: outside the class.            | Accessed using the dot operator . on an object.                                  |
| **Multiple Instances**     | Multiple objects can be created from the same class.                          | Each object is a distinct instance of the class.                                 |
| **Static Members (C++11)** | Can have static data members and static member functions.                     | Static members are shared among all instances of the class.                      |
| **Friend Functions**       | Can have friend functions that have access to private members.                | Friend functions can access private members of a specific object.                |
| **Constructor/Destructor** | Can have user-defined constructors and destructors.                           | No user-defined constructors/destructors (implicitly provided if not defined).   |
| **Inheritance**            | Can be used for inheritance (base class).                                     | Objects themselves do not participate in inheritance.                            |
| **Polymorphism**           | Can participate in polymorphism through virtual functions.                    | Objects can be used in a polymorphic context with pointers and references.       |


### Example of Class and Object

```cpp
#include <iostream>

class Box {
    public:
        int size;

    public:
        void TakeSize(int _size)
        {
            size = _size;
        }

        int DisplaySize()
        {
            return size;
        }
};

int main()
{
    Box object = Box();

    object.TakeSize(100);
    std::cout << object.DisplaySize();

    return 0;
}
```

## Concept of Abstract Class / Virtual Function <a name="concept_of_abs_class"></a>

```cpp
#include <iostream>

// virtual keyword is used to make an abstract class.
// const = 0, that means it must be derived by its inherit class.

class SomeClass {
    public:
        virtual void functionA() const = 0;
        virtual void functionB() const = 0;
};


int main()
{
    SomeClass objet = SomeClass(); // error: cannot initialize abstract class. What is an abstract class?

    return 0;
}
```

- An abstract class in C++ is a class that cannot be instantiated on its own and is meant to serve as a base or parent class for other classes.
- Abstract classes can have both abstract and concrete (implemented) methods. Abstract methods are pure virtual functions that have no implementation in the abstract class and must be overridden by derived classes.
- Abstract classes are designed to provide a common interface or set of functionalities that derived classes must implement.

```cpp
#include <iostream>


class SomeClass { // base class
    public:
        virtual void functionA() const = 0; // must be overridden
        virtual void functionB()
        {
            std::cout << "\ndare."; // default function, if not overridden
        }
};

class SomeParentClass : public SomeClass { // class inheriting base
    public:
        void functionA() const override // must be overridden function
        {
            std::cout << "Sigh..";
        }
};


int main()
{
    SomeParentClass object = SomeParentClass();

    object.functionA(); // calling functionA
    object.SomeClass::functionB(); // calling public functionB of base class
    object.functionB(); // calling functionB from sub class

    return 0;
}

```

#### Output
```
Sigh..
dare.
dare.
```

```cpp
#include <iostream>


class SomeClass { // base class
    public:
        virtual void functionA() const = 0;
        virtual void functionB()
        {
            std::cout << "\nbase B";
        }
        virtual void functionC()
        {
            std::cout << "\nbase C";
        }
};

class SomeParentClass : public SomeClass {
    public:
        void functionA() const override
        {
            std::cout << "A";
        }

        void functionC() override
        {
            std::cout << "\nC";
        }
};


int main()
{
    SomeParentClass object = SomeParentClass();

    object.functionA();
    object.SomeClass::functionB();
    object.functionB();
    object.SomeClass::functionC();
    object.functionC();

    return 0;
}
```

#### Output
```
A
base B
base B
base C
C
```

## Friend Function <a name="friend_function"></a>

- It is to use private member of an object.
- It has to be declared outside of the class.
- It must take already initialized object.

### Example
```cpp
#include <iostream>

class SomeClass {
    private:
        int a = 10, b = 20;
    public:
        friend int sum(const SomeClass& obj);
};

int sum(const SomeClass& obj)
{
    return obj.a + obj.b;
}


int main()
{
    SomeClass object = SomeClass();
    std::cout << sum(object);

    return 0;
}
```
