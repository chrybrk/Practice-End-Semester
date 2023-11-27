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
