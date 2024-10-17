#include <iostream>

class MyClass {
public:
    int *data;
    int size;

    MyClass(int s) : size(s), data(new int[s]) {
        for (int i = 0; i < s; ++i) data[i] = i;
    }

    // Move assignment operator
    MyClass& operator=(MyClass &&other) noexcept {
        if (this != &other) {
            delete[] data;
            data = other.data;
            size = other.size;
            other.data = nullptr;
            other.size = 0;
            std::cout << "Move assignment operator with dynamic array" << std::endl;
        }
        return *this;
    }

    ~MyClass() {
        delete[] data;
    }
};

int main() {
    MyClass obj1(5);
    MyClass obj2(10);
    obj2 = std::move(obj1);  // Transfers dynamic array ownership
}
