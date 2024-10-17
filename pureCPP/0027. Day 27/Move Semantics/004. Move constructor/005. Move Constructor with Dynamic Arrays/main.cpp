#include <iostream>

class MyClass {
public:
    int *data;
    int size;

    MyClass(int s) : size(s), data(new int[s]) {
        for (int i = 0; i < s; ++i) data[i] = i;
    }

    // Move constructor
    MyClass(MyClass &&other) noexcept : data(other.data), size(other.size) {
        other.data = nullptr;
        other.size = 0;
        std::cout << "Move constructor called, array moved" << std::endl;
    }

    ~MyClass() {
        delete[] data;
    }
};

int main() {
    MyClass obj1(5);
    MyClass obj2(std::move(obj1));  // Move constructor transfers ownership of dynamic array
}
