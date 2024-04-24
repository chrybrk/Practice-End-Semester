public class Test {
    public static void main(String args[]) {
    }
}

final class A {
    void some_method() {
    }
}

class B extends A {
    void some_method() {
    }
}

/*
Test.java:11: error: cannot inherit from final A
class B extends A {
                ^
1 error
error: compilation failed
*/

// We cannot inherit when `final` is applied.
