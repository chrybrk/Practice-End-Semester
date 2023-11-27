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
