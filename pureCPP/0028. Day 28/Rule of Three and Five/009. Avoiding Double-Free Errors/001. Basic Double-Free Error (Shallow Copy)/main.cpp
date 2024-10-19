#include <iostream>

class ShallowCopy {
    int* data;
public:
    ShallowCopy(int value) {
        data = new int(value);
        std::cout << "Resource allocated (ShallowCopy)!" << std::endl;
    }

    // Copy Constructor (Shallow Copy)
    ShallowCopy(const ShallowCopy& other) : data(other.data) {
        std::cout << "Shallow copy constructor called!" << std::endl;
    }

    ~ShallowCopy() {
        delete data;
        std::cout << "Resource deallocated (ShallowCopy)!" << std::endl;
    }

    void display() const {
        std::cout << "Data: " << *data << std::endl;
    }
};

int main() {
    ShallowCopy obj1(42);
    ShallowCopy obj2 = obj1;  // Shallow copy, both objects share the same memory
    obj1.display();
    obj2.display();  // Same data, but when both objects are destroyed, double-free occurs

    return 0;
}
