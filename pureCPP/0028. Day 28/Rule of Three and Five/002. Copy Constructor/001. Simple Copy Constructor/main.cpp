#include <iostream>

class SimpleCopy {
    int data;
public:
    SimpleCopy(int value) : data(value) {
        std::cout << "Constructor called!" << std::endl;
    }

    // Copy Constructor
    SimpleCopy(const SimpleCopy& other) : data(other.data) {
        std::cout << "Copy Constructor called!" << std::endl;
    }

    void display() const {
        std::cout << "Data: " << data << std::endl;
    }
};

int main() {
    SimpleCopy obj1(10);
    SimpleCopy obj2 = obj1;  // Copy constructor is called
    obj2.display();  // Display copied value
    return 0;
}
