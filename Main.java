public class Main {
    public static void main(String args[]) {
        Test ref_variable = new Test();
        ref_variable.some_variable = 10;
        System.out.println(ref_variable.some_variable);

        /* output
         * 0
        */

        // in case of `public`, its accessible in every scope.
    }
}

public class Test {
    protected int some_variable;
}
