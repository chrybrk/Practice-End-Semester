# Table of contents

1. [Introduction to Java](#intro)
    - [JDK, JVM & JRE](#intro_basic)
    - [Concept of OOPS](#intro_oops)
    - [IO Operators](#intro_io)
    - [Class vs Object](#intro_cvo)
    - [Private vs Public vs Protected](#intro_modifier)
    - [Keywords: final, static, new](#intro_keyword)
2. [Core Concept of Java](#core)
    - [Functions](#core_func)
    - [Overloading](#core_class)
    - [Constructor](#core_cstr)
    - [Abstract Class](#core_abs)
    - [Interface Class](#core_intf)
    - [Keywords: this, super](#core_keyword)
3. [Inheritance](#inheritance)
    - [Define Inheritance](#inheritance_def)
    - [Types](#inheritance_types)
    - [Multiple level and Multiple Base Inheritance](#inheritance_mlv)
    - [Nesting inside class?](#inheritance_nesting)
4. [More Java](#mjava)
    - [Strings](#mjava_strings)
    - [Exception Handling](#mjava_exp)
    - [Throw & Throws](#mjava_diff)
    - [Multi-Threading](#mjava_mth)
5. [Programs](#programs)
    - [Armstrong](#arm)
    - [Factorial](#fact)
    - [Matrix](#mat)
    - [Pattern](#patt)
    - [Big](#big)

## Introduction to Java <a name="intro"></a>
- Java is another object oriented programming language.
- Java is cross-platform, and by `cross-platform`, i mean, when we compile our code into `byte-code`, we can port to any device.
- Java has its own system to execute.
- Java has huge community to work with, which means lots of library and resources available.

### JDK, JVM & JRE <a name="intro_basic"></a>

### JDK
- JDK is an acronym for Java Development Kit.
- It physically exists. It contains JRE + development tools.

### JRE
- JRE is an acronym for Java Runtime Environment.
- It is used to provide the runtime environment.
- It is the implementation of JVM. It physically exists. 
- It contains a set of libraries + other files that JVM uses at runtime.

### JVM
- JVM (Java Virtual Machine) is an abstract machine.
- It is called a virtual machine because it doesn't physically exist.
- It is a specification that provides a runtime environment in which Java bytecode can be executed.
- It can also run those programs which are written in other languages and compiled to Java bytecode.
-   Loads code
-   Verifies code
-   Executes code
-   Provides runtime environment

## Concept of OOPS <a name="intro_oops"></a>
1. Inheritance:
    -   Java supports inheritance, allowing a class to inherit properties and behaviors from another class.
    -   This promotes code reuse and the creation of a hierarchy of classes.

2.  Polymorphism:
    -   Polymorphism enables objects of different types to be treated as objects of a common base type.
    -   It includes features like function overloading and virtual functions.

3.  Encapsulation:
    -   Encapsulation refers to the bundling of data and methods that operate on the data into a single unit (class).
    -   It helps in data hiding and protecting the internal state of an object.

4.  Abstraction:
    -   Abstraction involves simplifying complex systems by modeling classes based on the essential properties and behaviors they share.
    -   It allows the programmer to focus on the relevant details while ignoring unnecessary complexities.

## IO Operators <a name="intro_io"></a>
- `java System.out.println("Hello, World!");`
- With using this line of code, we can print things out on screen.
- Like, other languages do, we can print from `String` to `Int` or `Float`, java can do it too.

1. Basic Hello World Program
```java
/*
 * Things to note:
 *      File name: Main.java
 *      Class name: Main
 *      File and Class name must match.
 *      else, it will throw err.
 *
 *      This is the standard way of writing java code.
*/
public class Main {
    public static void main(String[] args) {
        System.out.println("Hello, World!");

        int a = 10;
        int b = 20;
        int c = a + b;

        System.out.println("Summing " + a + " + " + b + " = " + c);
    }
}
```

2. Basic User Input
```java
// importing external package
import java.util.Scanner;

// In this case, Scanner is a class which we can use to take input.

public class Main {
    public static void main(String[] args) {
        Scanner ref_variable = new Scanner(System.in);

        // We will discuss more about how `new` keyword works.
        // Scanner: class is a user-defined data type,
        // int a = 10; so when we create user-defined data, we will use that data type.
        // Scanner(System.in); when creating object for Scanner, it takes one argument (System.in).
        // ref_variable, whenever we create object it returns address where the object is in memory.
        // NOTE: System.in, is a file descriptor, it is unique variable that has reference of opened file,
        // Or Input Output Stream. Like, console.
        
        int a = ref_variable.nextInt(); // nextInt(), is a method of Scanner class. which reads `int` from input.
        int b = ref_variable.nextInt();
        int c = a + b;

        System.out.println(c);
    }
}
```
