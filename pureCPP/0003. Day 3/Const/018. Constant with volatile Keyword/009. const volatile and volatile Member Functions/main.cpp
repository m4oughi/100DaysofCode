#include <iostream>

class MyClass {
public:
    const volatile int getValue() const volatile {
        return value;
    }
private:
    const volatile int value = 400;
};

int main() {
    MyClass obj;
    std::cout << obj.getValue() << std::endl; // Prints 400
}
