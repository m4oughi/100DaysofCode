#include <iostream>
#include <utility>

class MyClass {
public:
    int* data;

    MyClass(int value) {
        data = new int(value);
        std::cout << "Constructor called\n";
    }

    // Delete Copy Constructor and Copy Assignment
    MyClass(const MyClass&) = delete;
    MyClass& operator=(const MyClass&) = delete;

    // Allow Move Constructor
    MyClass(MyClass&& other) noexcept : data(other.data) {
        other.data = nullptr;
        std::cout << "Move Constructor called\n";
    }

    ~MyClass() {
        delete data;
        std::cout << "Destructor called\n";
    }
};

int main() {
    MyClass obj1(50);
    // MyClass obj2 = obj1; // Error: Copying not allowed
    MyClass obj3 = std::move(obj1); // Allowed

    return 0;
}
