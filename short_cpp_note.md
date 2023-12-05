## ChatGPT
1. **Procedure Oriented Programming vs. Object Oriented Programming:**
   - **Procedure Oriented Programming (POP):**
     - Focuses on procedures or routines.
     - Programs are organized as a series of functions that operate on data.
     - Data is typically shared among functions.
     - Emphasizes on algorithms and procedures.
     - Examples: C, Pascal.

   - **Object Oriented Programming (OOP):**
     - Focuses on objects that encapsulate data and behavior.
     - Programs are organized around classes and objects.
     - Encapsulation, inheritance, and polymorphism are key concepts.
     - Emphasizes on real-world entities and their interactions.
     - Examples: C++, Java, Python.

2. **Input and Output Operators:**
   - **Input Operator (`>>`):**
     - Reads data from the standard input stream or other input sources.
     - Example: `cin >> variable;`

   - **Output Operator (`<<`):**
     - Outputs data to the standard output stream or other output destinations.
     - Example: `cout << "Hello, World!";`

3. **Scope Resolution Operators:**
   - **`::` (Scope Resolution Operator):**
     - Used to define the scope of a variable or function.
     - Allows access to global variables when there is a local variable with the same name.
     - Example: `::global_variable;`

4. **Destructor:**
   - **Member Function of Destructor:**
     - Special member function with the same name as the class preceded by a tilde (`~`).
     - Automatically called when an object goes out of scope or is explicitly deleted.
     - Used to release resources allocated by the object.
     - Example: `~ClassName();`

5. **Static Keyword in C++:**
   - **`static` Keyword:**
     - Used to declare static members of a class or variables/functions outside a class.
     - A static member is shared among all instances of a class.
     - Example: `static int count;`

6. **Derived Class with Example:**
   - **Example:**
     ```cpp
     class Shape {
       // Base class
     };

     class Circle : public Shape {
       // Derived class
     };
     ```

7. **Compile Time and Run Time Polymorphism:**
   - **Compile Time Polymorphism (Static Binding):**
     - Resolved during compile time.
     - Achieved through function overloading and operator overloading.

   - **Run Time Polymorphism (Dynamic Binding):**
     - Resolved during runtime.
     - Achieved through virtual functions and the use of pointers/references.

8. **Low-level Language:**
   - **Definition:**
     - A programming language that provides little or no abstraction from a computer's instruction set architecture.
     - Directly corresponds to machine code or assembly language.

9. **Four Pillars of OOPs Concept:**
   - **1. Encapsulation:** Bundling of data and methods that operate on the data.
   - **2. Inheritance:** Mechanism to create a new class using properties of an existing class.
   - **3. Polymorphism:** Ability to present the same interface for different data types.
   - **4. Abstraction:** Reducing complexity by modeling classes based on essential properties.

10. **Function Prototype:**
    - **Definition:**
      - A function prototype declares the function's signature (return type, name, and parameters) before its actual implementation.
    - **Example:**
      ```cpp
      int add(int a, int b); // Function prototype
      ```

11. **Function Overloading:**
    - **Concept:**
      - Defining multiple functions with the same name but different parameters.
    - **Example:**
      ```cpp
      int add(int a, int b);
      float add(float a, float b);
      ```

12. **Classes and Objects with Example:**
    - **Example:**
      ```cpp
      class Car {
      public:
        string brand;
        int year;
      };

      int main() {
        Car myCar;
        myCar.brand = "Toyota";
        myCar.year = 2022;
      }
      ```

13. **Four Types of Memory Management in C++:**
    - **1. Automatic Memory Management (Stack):** Local variables.
    - **2. Dynamic Memory Management (Heap):** `new` and `delete` operators.
    - **3. Thread Local Storage (TLS):** Each thread has its own copy of data.
    - **4. Memory-mapped Memory Management:**

14. **Benefits and Limitations of OOPs:**
    - **Benefits:**
      - Encapsulation for data security.
      - Reusability through inheritance.
      - Flexibility through polymorphism.
      - Modularity for easy maintenance.
    - **Limitations:**
      - Overhead due to dynamic binding.
      - Complexity in designing.
      - Larger memory footprint.

15. **Memory Allocation of Objects with Example:**
    - **Example:**
      ```cpp
      MyClass* obj = new MyClass(); // Dynamic allocation
      delete obj; // Release memory
      ```

16. **Virtual Function with Example:**
    - **Example:**
      ```cpp
      class Shape {
      public:
        virtual void draw() {
          // Implementation in base class
        }
      };

      class Circle : public Shape {
      public:
        void draw() override {
          // Implementation in derived class
        }
      };
      ```

17. **File Operations in C++:**
    - **1. Opening a File (`ofstream` or `ifstream`).**
    - **2. Writing to a File (`<<`).**
    - **3. Reading from a File (`>>`).**
    - **4. Closing a File (`close()`).**

18. **Multilevel Inheritance with Example:**
    - **Example:**
      ```cpp
      class A {
        // Base class
      };

      class B : public A {
        // Derived class from A
      };

      class C : public B {
        // Derived class from B
      };
      ```

19. **`sizeof()` Operator:**
    - **Definition:**
      - Returns the size in bytes of the object or type.
    - **Example:**
      ```cpp
      int size = sizeof(int);
      ```

20. **Operator Overloading and Unary Operator Example:**
    - **Example:**
      ```cpp
      class Complex {
      public:
        int real, imag;
        
        Complex operator-() {
          Complex temp;
          temp.real = -real;
          temp.imag = -imag;
          return temp;
        }
      };

      int main() {
        Complex c1;
        Complex result = -c1; // Unary operator overloading
      }
      ```

21. **Nesting of Class in C++:**
    - **Example:**
      ```cpp
      class Outer {
      public:
        class Inner {
          // Inner class
        };
      };
      ```

22. **Constructor in C++ with Parameterized Constructor:**
    - **Example:**
      ```cpp
      class MyClass {
      public:
        int value;

        // Parameterized constructor
        MyClass(int v) : value(v) {}
      };
      ```

23. **Call by Reference in C++:**
    - **Example:**
      ```cpp
      void increment(int &num) {
        num++;
      }

      int main() {
        int x = 5;
        increment(x);
      }
      ```

24. **Recursive Function for Factorial in Class:**
    - **Example:**
      ```cpp
      class Factorial {
      public:
        int calculate(int n) {
          if (n == 0 || n == 1)
            return 1;
          else
            return n * calculate(n - 1);
        }
      };
      ```

25. **Multiple and Hierarchical Inheritances:**
    - **Example:**
      ```cpp
      class A {
        // Base class
      };

      class B : public A {
        // Derived class from A
      };

      class C : public A {
        // Derived class from A
      };

      class D : public B, public C {
        // Multiple inheritance
      };
      ```
