#include <iostream>

class ShallowCopyProblem {
    int* data;
public:
    ShallowCopyProblem(int value) {
        data = new int(value);
        std::cout << "Resource allocated (ShallowCopyProblem)!" << std::endl;
    }

    // Copy Constructor (Shallow Copy)
    ShallowCopyProblem(const ShallowCopyProblem& other) : data(other.data) {
        std::cout << "Shallow copy constructor called!" << std::endl;
    }

    ~ShallowCopyProblem() {
        delete data;
        std::cout << "Resource deallocated (ShallowCopyProblem)!" << std::endl;
    }

    void display() const {
        std::cout << "Data: " << *data << std::endl;
    }
};

int main() {
    ShallowCopyProblem obj1(42);
    ShallowCopyProblem obj2 = obj1;  // Shallow copy, both objects point to the same memory

    obj1.display();
    obj2.display();  // Same data displayed

    // Destructor called twice on the same resource, causing double deletion
    return 0;
}
