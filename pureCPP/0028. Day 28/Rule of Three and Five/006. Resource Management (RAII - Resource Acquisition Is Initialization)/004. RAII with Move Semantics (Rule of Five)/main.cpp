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

    // Move Constructor
    ResourceRAII(ResourceRAII&& other) noexcept {
        data = other.data;  // Transfer ownership
        other.data = nullptr;
        std::cout << "Move Constructor: Ownership transferred!" << std::endl;
    }

    // Move Assignment Operator
    ResourceRAII& operator=(ResourceRAII&& other) noexcept {
        if (this != &other) {
            delete data;
            data = other.data;  // Transfer ownership
            other.data = nullptr;
            std::cout << "Move Assignment: Ownership transferred!" << std::endl;
        }
        return *this;
    }

    ~ResourceRAII() {
        delete data;
        std::cout << "Memory deallocated!" << std::endl;
    }

    void display() const {
        if (data)
            std::cout << "Data: " << *data << std::endl;
        else
            std::cout << "Data is null" << std::endl;
    }
};

int main() {
    {
        ResourceRAII obj1(200);
        ResourceRAII obj2 = std::move(obj1);  // Move constructor
        obj2.display();
        obj1.display();  // obj1 is in a valid but empty state
    }  // Memory is released when objects go out of scope
    return 0;
}
