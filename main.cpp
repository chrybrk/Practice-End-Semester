#include <iostream>
#include <memory>

int main()
{
    std::unique_ptr<int> value0 = std::make_unique<int>(10);
    std::shared_ptr<int> value1 = std::make_shared<int>(10);

    return 0;
}
