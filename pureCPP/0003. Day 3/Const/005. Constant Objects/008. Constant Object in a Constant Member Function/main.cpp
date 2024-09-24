#include <iostream>

class MyClass {
public:
    MyClass(int v) : value(v) {}

    void display() const {
        const MyClass obj(130); // Constant object in const member function
        std::cout << obj.getValue() << std::endl;
    }

    int getValue() const {
        return value;
    }

private:
    int value;
};

int main() {
    MyClass instance(140);
    instance.display(); // Allowed: calling const member function

    return 0;
}