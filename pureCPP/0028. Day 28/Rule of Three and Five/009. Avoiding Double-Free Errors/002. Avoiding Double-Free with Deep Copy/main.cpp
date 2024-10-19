#include <iostream>

class DeepCopy {
    int* data;
public:
    DeepCopy(int value) {
        data = new int(value);
        std::cout << "Resource allocated (DeepCopy)!" << std::endl;
    }

    // Copy Constructor (Deep Copy)
    DeepCopy(const DeepCopy& other) : data(new int(*other.data)) {
        std::cout << "Deep copy constructor called!" << std::endl;
    }

    ~DeepCopy() {
        delete data;
        std::cout << "Resource deallocated (DeepCopy)!" << std::endl;
    }

    void display() const {
        std::cout << "Data: " << *data << std::endl;
    }
};

int main() {
    DeepCopy obj1(42);
    DeepCopy obj2 = obj1;  // Deep copy, no shared memory, no double-free
    obj1.display();
    obj2.display();  // Different objects, same value but separate resources

    return 0;
}
