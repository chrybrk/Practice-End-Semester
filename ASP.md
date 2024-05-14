# Question Bank

# Question 1 -> Discuss the Encapsulation and Access specifiers in C#.

# Encapsulation and Access Specifiers in C#

Encapsulation in C# involves bundling data and methods within a class and controlling access to them. Access specifiers determine the visibility of members within a class and from external code.

## Access Specifiers:

1. **Public**: Accessible from any class or assembly.
2. **Private**: Accessible only within the same class or struct.
3. **Protected**: Accessible within the same class or from derived classes.
4. **Internal**: Accessible within the same assembly but not outside.
5. **Protected Internal**: Accessible within the same assembly or from derived classes.

## Encapsulation:

- **Data Protection**: By using private members, data integrity is maintained as they cannot be accessed from outside the class.
- **Controlled Access**: Public methods provide a controlled interface for interacting with encapsulated data, preventing unintended modifications.
- **Abstraction**: Encapsulation hides the complex internal workings of a class, allowing users to interact with it at a higher level without needing to know its implementation details.

Encapsulation, combined with access specifiers, enhances code readability, maintainability, and security by restricting access to internal components and providing a clear interface for interaction.

# Question 2 -> Describe the code for delete a folder in C#.

# Deleting a Folder in C#

To delete a folder in C#, you can use the `Directory.Delete()` method provided by the `System.IO` namespace. This method deletes the specified directory and, if indicated, any subdirectories and files in the directory.

## Code Example:

```csharp
using System;
using System.IO;

class Program
{
    static void Main(string[] args)
    {
        string folderPath = @"C:\Path\To\Folder";

        try
        {
            // Delete the folder and its contents recursively
            Directory.Delete(folderPath, true);
            Console.WriteLine("Folder deleted successfully.");
        }
        catch (Exception ex)
        {
            Console.WriteLine($"Error: {ex.Message}");
        }
    }
}

# Question 3 -> What is the output of below program?

```csharp
private static void Main(string[] args)
{
    Console.ForegroundColor = ConsoleColor.Yellow;
    int a = 10, b = 20;
    Console.WriteLine("Before Swappping a=" + a + " b=" + b);
    a = a + b; //Here a=30 (10+20=30)      
    b = a - b; //Here b=10 (30-20=10)      
    a = a - b; //Here a=20 (30-10=20)   
    Console.Write("After Swaping a=" + a + " b=" + b);
    Console.ReadLine();
}

Before Swapping a=10 b=20
After Swapping a=20 b=10

```

# Question 4 -> Explain the different types of inheritance available in C# language with the help of an example.

# Types of Inheritance in C#

Inheritance in C# allows a class (subclass or derived class) to inherit properties and behavior from another class (base class or superclass). C# supports the following types of inheritance:

## 1. Single Inheritance
## 2. Multilevel Inheritance
## 3. Hierarchical Inheritance

### Example:

```csharp
class Animal
{
    public void Eat()
    {
        Console.WriteLine("Animal is eating.");
    }
}

class Dog : Animal
{
    public void Bark()
    {
        Console.WriteLine("Dog is barking.");
    }
}
```

# Question 5 -> Outline the FlagsAttribute and ObsoleteAttribute with 2 differences.

# FlagsAttribute vs. ObsoleteAttribute

| Attribute           | FlagsAttribute                                      | ObsoleteAttribute                                   |
|---------------------|-----------------------------------------------------|------------------------------------------------------|
| **Purpose**         | Used to indicate that an enumeration can be treated as a set of bit fields. | Marks a program entity as obsolete or deprecated.    |
| **Usage**           | Applied to an enumeration to enable bitwise operations on its values.   | Applied to a method, property, event, or class to indicate that it should no longer be used. |
| **Example**         | ```csharp [Flags] enum Days { None = 0, Sunday = 1, Monday = 2, Tuesday = 4, Wednesday = 8, Thursday = 16, Friday = 32, Saturday = 64 } ``` | ```csharp class MyClass { [Obsolete("Use NewMethod instead.")] public void OldMethod() { // Old implementation } public void NewMethod() { // New implementation } } ``` |
| **Difference 1**    | Facilitates bitwise operations for enumerations, enabling combinations of values. | Indicates deprecated program entities, encouraging developers to migrate to newer alternatives. |
| **Difference 2**    | Primarily used for improving code readability and expressing set-based semantics. | Used for deprecating specific elements in code, urging developers to avoid their usage and transition to recommended alternatives. |

# Question 6 -> Conclude the followings:
1. CTS (Common Type System)
2. CLS(Common Language Specification )      
3. JIT-Compilers

# CTS, CLS, and JIT-Compilers

| Term                     | Description                                                                                                                     |
|--------------------------|---------------------------------------------------------------------------------------------------------------------------------|
| **CTS (Common Type System)** | Defines a set of data types and programming constructs used by all .NET languages to ensure cross-language compatibility.        |
| **CLS (Common Language Specification)** | A subset of CTS that establishes a set of rules and guidelines to enable interoperability between .NET languages.             |
| **JIT-Compilers (Just-In-Time Compilers)** | Translate Intermediate Language (IL) code into native machine code at runtime, optimizing performance by adapting to the target platform. |

# Question 7 -> What are the new features of GDI+ (Graphical Device Interface Plus)? Illustrate different features supported by GDI+ classes in C# language.

# Features of GDI+ in C#

GDI+ (Graphical Device Interface Plus) is a powerful graphics library in the .NET Framework, offering various features for creating and manipulating graphics in C# applications.

## Key Features:

1. **Drawing Shapes and Graphics**: Supports drawing lines, rectangles, ellipses, polygons, curves, and paths onto a drawing surface.
2. **Text Rendering**: Allows rendering text with different fonts, sizes, styles, and alignments.
3. **Image Manipulation**: Provides extensive support for loading, displaying, and manipulating images in various formats.
4. **Brushes and Pens**: Offers solid, gradient, hatch, and texture brushes, as well as pens with various line styles and widths.
5. **Transformations**: Supports translation, rotation, scaling, and skewing of graphical elements.
6. **Clipping and Regions**: Enables defining clipping regions to limit the rendering area.
7. **Double Buffering**: Supports double buffering to reduce flickering and improve rendering smoothness.
8. **Metafiles**: Allows creation and manipulation of device-independent metafiles.
9. **Printing Support**: Provides classes for printing graphics and text onto physical devices such as printers.
10. **Advanced Drawing Techniques**: Supports anti-aliasing, alpha blending, gradient shading, texture mapping, and path effects.

These features make GDI+ a versatile and powerful tool for graphics programming in C#, enabling developers to create visually appealing and interactive applications.

# Question 8 -> What do you understand LINQ to SQL in C#? Classify the functionality to execution of stored procedure in SQL Server.

# LINQ to SQL in C#

LINQ to SQL is a component of the .NET Framework that allows developers to interact with relational databases using LINQ queries directly within C# code. It provides features for querying, manipulating, and managing data from SQL Server databases as objects in C#.

## Key Features:

- **ORM**: Maps database tables to C# classes and enables seamless interaction with relational data.
- **Querying Data**: Retrieves data from SQL Server databases using LINQ queries with C# syntax.
- **Modifying Data**: Supports insertion, updating, and deletion of data in SQL Server tables.
- **Deferred Execution**: Lazily evaluates LINQ queries for efficient query execution.
- **Automatic Change Tracking**: Tracks changes made to objects retrieved from the database.
- **Transaction Support**: Enables working with transactions for database operations.
- **Integration with Visual Studio**: Provides tools for designing database models and debugging LINQ queries.

# Execution of Stored Procedure in SQL Server with LINQ to SQL

Stored procedures in SQL Server are precompiled database operations that can be executed from C# code using LINQ to SQL.

## Execution Process:

1. **Define Stored Procedure**: Create a stored procedure in SQL Server to perform desired database operations.
2. **Import Stored Procedure**: Use LINQ to SQL designer in Visual Studio to import the stored procedure into the data context class.
3. **Invoke Stored Procedure**: Call the generated method from C# code to execute the stored procedure, providing any required parameters.
4. **Handle Results**: Process any returned data or output parameters in the C# code as needed.

By leveraging LINQ to SQL's functionality for executing stored procedures, developers can seamlessly integrate database operations into their C# applications, benefiting from the performance and scalability advantages of stored procedures in SQL Server.

# Question 9 -> Explain the “System.IO” directory.

# System.IO Namespace in C#

The `System.IO` namespace in C# provides classes and methods for performing input and output (I/O) operations, including reading from and writing to files, directories, and streams. It is an essential part of the .NET Framework for handling file system operations in C# applications.

## Key Components:

1. **File Operations**: Classes like `File` and `FileInfo` for creating, copying, moving, deleting, and reading files.
2. **Directory Operations**: Classes like `Directory` and `DirectoryInfo` for managing directories, including creation, deletion, and enumeration.
3. **Path Operations**: The `Path` class for working with file and directory paths, including combining paths and retrieving file names.
4. **Stream-based I/O**: Classes like `FileStream`, `MemoryStream`, and `StreamReader`/`StreamWriter` for reading from and writing to streams.
5. **Serialization**: Classes like `BinaryReader`/`BinaryWriter` and `StreamReader`/`StreamWriter` for serialization of data.
6. **Isolated Storage**: The `IsolatedStorage` class for storing data in a protected isolated storage area.

## Example Usage:

```csharp
using System;
using System.IO;

class Program
{
    static void Main(string[] args)
    {
        Directory.CreateDirectory(@"C:\NewDirectory");
        File.WriteAllText(@"C:\NewDirectory\test.txt", "Hello, World!");
        string text = File.ReadAllText(@"C:\NewDirectory\test.txt");
        Console.WriteLine("Text read from file: " + text);
        string[] files = Directory.GetFiles(@"C:\NewDirectory");
        foreach (string file in files)
        {
            Console.WriteLine(file);
        }
        Directory.Delete(@"C:\NewDirectory", true);
    }
}

- Define “CLSCompliantAttribute”.

- Explain working of garbage collection in ASP.NET?

- Define the objective for “File I/O” using C#.

- Describe the objective of MSIL in .net framework.

- Discuss the method overriding with example.

- Illustrate the purpose of the finally block in C#.

- What is delegate in C# discuss?

- Which platform is used to build the web-applications in asp.net? 

- Define “AssemblyName” in reflection.

- Explain the concept of multi-threading in c# .

- Discuss the “Directory.Delete” method in C#.

- Discuss the steps to create a Windows Application in C# using visual studio 2022.

- Build the program to generate sum of digits code with the help of while/for loop in C# console application?

- Discuss versioning. How we can solve “DLL Hell” problem in asp.net?

- Illustrate the implicit conversion in C#? Explain with the help of an example.

- Classify the Status Bar also write it’s syntax.

- Demonstrate the differences between private and shared assemblies.

- Explain the differences between abstraction and encapsulation in C# with example.

- Build a C# program to print even numbers from 1 to N. And N = 30.

```csharp
private static void Main(string[] args)
        {
            int i, sum = 0, n;
            Console.Write("Enter the Nth Number : ");
            n = int.Parse(Console.ReadLine());
            for (i = 0; i <= n; i++)
            {
                sum = sum + i;
            }
            Console.WriteLine("Sum of N Numbers : " + sum);
            Console.ReadLine();
        }
```
- N=50 find the error above program, if none write the output.

- What is an event handler? How is it designed? Examine with the help of an example.

- Examine the life cycle of Threading in C#. Also explain the all the threads State in C# application.

- Conclude the followings:
1. Global ASAX Files
2. Web Configuration Files
3. Machine Configuration Files

- Distinguish between single file assembly and multifile assembly.  Write a program to implement single file assembly.

- Illustrate the syntax and usage of partial methods in ASP.NET. Provide examples demonstrating how to declare and implement partial methods in different parts of a class.

- How do you create a Windows Form using Notepad and set various properties such as back color and size? Additionally, please demonstrate how to add checkbox and label controls to the Windows Form with a suitable example.

- How do you draw a text using GDI+ in an asp.net application? Interpret with a suitable example.
