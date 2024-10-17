#include <iostream>

class MyClass {
public:
    int *data;

    MyClass(int d) : data(new int(d)) {}

    // Move assignment operator
    MyClass& operator=(MyClass &&other) noexcept {
        if (this != &other) {
            delete data;
            data = other.data;
            other.data = nullptr;
            std::cout << "Move assignment operator called" << std::endl;
        }
        return *this;
    }

    // Delete copy assignment operator
    MyClass& operator=(const MyClass&) = delete;

    ~MyClass() {
        delete data;
    }
};

int main() {
    MyClass obj1(10);
    MyClass obj2(20);
    // obj2 = obj1;  // Error: Copy assignment is deleted
    obj2 = std::move(obj1);  // Move assignment is called
}
