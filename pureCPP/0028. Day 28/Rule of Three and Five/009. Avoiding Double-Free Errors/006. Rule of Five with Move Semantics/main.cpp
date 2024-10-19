#include <iostream>

class RuleOfFive {
    int* data;
public:
    RuleOfFive(int value) : data(new int(value)) {
        std::cout << "Resource allocated (RuleOfFive)!" << std::endl;
    }

    // Copy Constructor (Deep Copy)
    RuleOfFive(const RuleOfFive& other) : data(new int(*other.data)) {
        std::cout << "Deep copy constructor called!" << std::endl;
    }

    // Copy Assignment Operator (Deep Copy)
    RuleOfFive& operator=(const RuleOfFive& other) {
        if (this != &other) {
            delete data;
            data = new int(*other.data);
            std::cout << "Deep copy assignment operator called!" << std::endl;
        }
        return *this;
    }

    // Move Constructor
    RuleOfFive(RuleOfFive&& other) noexcept : data(other.data) {
        other.data = nullptr;  // Avoid double-free by nullifying moved-from object
        std::cout << "Move constructor called!" << std::endl;
    }

    // Move Assignment Operator
    RuleOfFive& operator=(RuleOfFive&& other) noexcept {
        if (this != &other) {
            delete data;
            data = other.data;
            other.data = nullptr;  // Avoid double-free by nullifying moved-from object
            std::cout << "Move assignment operator called!" << std::endl;
        }
        return *this;
    }

    ~RuleOfFive() {
        delete data;
        std::cout << "Resource deallocated (RuleOfFive)!" << std::endl;
    }

    void display() const {
        if (data)
            std::cout << "Data: " << *data << std::endl;
        else
            std::cout << "Data is null!" << std::endl;
    }
};

int main() {
    RuleOfFive obj1(42);
    RuleOfFive obj2 = std::move(obj1);  // Move constructor

    obj1.display();  // obj1 is in a null state after the move
    obj2.display();

    RuleOfFive obj3(100);
    obj3 = std::move(obj2);  // Move assignment operator

    obj2.display();  // obj2 is in a null state after the move
    obj3.display();

    return 0;
}
