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
