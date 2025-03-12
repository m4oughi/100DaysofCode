#include <iostream>

class MyClass {
public:
    static constexpr int value = 10;
};

static_assert(MyClass::value == 10, "MyClass::value must be 10");

int main() {
    std::cout << "User-defined type validation passed!\n";
    return 0;
}
