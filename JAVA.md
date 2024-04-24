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

## Concept of OOPS <a name="#intro_oops"></a>
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
