#include <iostream>

class MyClass {
public:
    void print(int value) const {
        std::cout << "Const print with int: " << value << std::endl;
    }

    void print(double value) const {
        std::cout << "Const print with double: " << value << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.print(1);   // Calls print(int)
    obj.print(1.5); // Calls print(double)
}
