#include <iostream>
#include <stdexcept>

class SafeMoveRAII {
    int* data;
public:
    SafeMoveRAII(int value) : data(new int(value)) {
        std::cout << "Resource allocated!" << std::endl;
    }

    // Move Constructor
    SafeMoveRAII(SafeMoveRAII&& other) noexcept : data(other.data) {
        other.data = nullptr;  // Nullify the moved-from object
        std::cout << "Move constructor called!" << std::endl;
    }

    // Move Assignment Operator
    SafeMoveRAII& operator=(SafeMoveRAII&& other) noexcept {
        if (this != &other) {
            delete data;  // Clean up the existing resource
            data = other.data;
            other.data = nullptr;  // Nullify the moved-from object
            std::cout << "Move assignment operator called!" << std::endl;
        }
        return *this;
    }

    ~SafeMoveRAII() {
        delete data;
        std::cout << "Resource deallocated!" << std::endl;
    }

    void display() const {
        if (data)
            std::cout << "Data: " << *data << std::endl;
        else
            std::cout << "Data is null!" << std::endl;
    }
};

int main() {
    try {
        SafeMoveRAII obj1(300);
        SafeMoveRAII obj2 = std::move(obj1);  // Move constructor
        obj2.display();
        obj1.display();  // obj1 is in a valid but null state

        SafeMoveRAII obj3(400);
        obj3 = std::move(obj2);  // Move assignment operator
        obj3.display();
        obj2.display();  // obj2 is in a valid but null state
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }  // Resources are efficiently transferred with exception safety
    return 0;
}
