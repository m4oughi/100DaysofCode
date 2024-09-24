#include <iostream>

class MyClass {
    int& ref;
public:
    MyClass(int& value) : ref(value) {}

    // Prevent copying because references cannot be reseated
    MyClass(const MyClass&) = delete;
    MyClass& operator=(const MyClass&) = delete;

    void print() const {
        std::cout << "Reference refers to: " << ref << std::endl;
    }
};

int main() {
    int value = 42;
    MyClass obj(value);
    obj.print();  // Outputs: Reference refers to: 42

    // MyClass obj2 = obj;  // Error: Copy constructor is deleted

    return 0;
}
