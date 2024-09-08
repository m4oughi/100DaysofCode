#include <iostream>
#include <cassert>

class MyClass {
public:
    static const int value = 400;
    static void validate() {
        static_assert(value == 400, "Value must be 400");
    }
};

int main() {
    MyClass::validate();
    std::cout << "Validation passed." << std::endl; // Prints "Validation passed."
}
