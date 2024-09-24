#include <iostream>

class MyClass {
private:
    int* ptr;

public:
    MyClass(int value) : ptr(new int(value)) {}
    ~MyClass() { delete ptr; }

    int* getPointer() const {
        return ptr;  // Return non-const pointer
    }
};

int main() {
    MyClass obj(99);
    std::cout << "Pointer value: " << *(obj.getPointer()) << std::endl;
    return 0;
}
