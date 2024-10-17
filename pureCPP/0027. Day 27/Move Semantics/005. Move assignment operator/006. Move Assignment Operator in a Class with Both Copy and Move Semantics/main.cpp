#include <iostream>

class MyClass {
public:
    int *data;

    MyClass(int d) : data(new int(d)) {}

    // Copy assignment operator
    MyClass& operator=(const MyClass &other) {
        if (this != &other) {
            delete data;
            data = new int(*other.data);
            std::cout << "Copy assignment called" << std::endl;
        }
        return *this;
    }

    // Move assignment operator
    MyClass& operator=(MyClass &&other) noexcept {
        if (this != &other) {
            delete data;
            data = other.data;
            other.data = nullptr;
            std::cout << "Move assignment called" << std::endl;
        }
        return *this;
    }

    ~MyClass() {
        delete data;
    }
};

int main() {
    MyClass obj1(10);
    MyClass obj2(20);
    obj2 = obj1;           // Calls copy assignment
    obj2 = std::move(obj1);  // Calls move assignment
}
