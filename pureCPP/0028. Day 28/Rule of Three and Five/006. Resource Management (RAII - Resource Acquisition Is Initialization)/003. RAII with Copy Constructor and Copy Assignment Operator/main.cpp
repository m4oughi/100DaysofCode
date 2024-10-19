#include <iostream>

class ResourceRAII {
    int* data;
public:
    ResourceRAII(int value) {
        data = new int(value);
        std::cout << "Memory allocated!" << std::endl;
    }

    // Copy Constructor
    ResourceRAII(const ResourceRAII& other) {
        data = new int(*other.data);  // Deep copy
        std::cout << "Copy Constructor: Memory allocated!" << std::endl;
    }

    // Copy Assignment Operator
    ResourceRAII& operator=(const ResourceRAII& other) {
        if (this != &other) {
            delete data;
            data = new int(*other.data);  // Deep copy
            std::cout << "Copy Assignment: Memory allocated!" << std::endl;
        }
        return *this;
    }

    ~ResourceRAII() {
        delete data;
        std::cout << "Memory deallocated!" << std::endl;
    }

    void display() const {
        std::cout << "Data: " << *data << std::endl;
    }
};

int main() {
    {
        ResourceRAII obj1(100);
        ResourceRAII obj2 = obj1;  // Copy constructor
        obj1.display();
        obj2.display();
    }  // Memory is released when objects go out of scope
    return 0;
}
