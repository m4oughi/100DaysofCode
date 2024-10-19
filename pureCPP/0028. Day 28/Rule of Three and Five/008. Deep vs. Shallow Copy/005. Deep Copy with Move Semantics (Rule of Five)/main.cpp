#include <iostream>

class DeepCopyRuleOfFive {
    int* data;
public:
    DeepCopyRuleOfFive(int value) : data(new int(value)) {
        std::cout << "Resource allocated (DeepCopyRuleOfFive)!" << std::endl;
    }

    // Copy Constructor (Deep Copy)
    DeepCopyRuleOfFive(const DeepCopyRuleOfFive& other) : data(new int(*other.data)) {
        std::cout << "Deep copy constructor called!" << std::endl;
    }

    // Copy Assignment Operator (Deep Copy)
    DeepCopyRuleOfFive& operator=(const DeepCopyRuleOfFive& other) {
        if (this != &other) {
            delete data;
            data = new int(*other.data);
            std::cout << "Deep copy assignment operator called!" << std::endl;
        }
        return *this;
    }

    // Move Constructor
    DeepCopyRuleOfFive(DeepCopyRuleOfFive&& other) noexcept : data(other.data) {
        other.data = nullptr;  // Nullify the moved-from object
        std::cout << "Move constructor called!" << std::endl;
    }

    // Move Assignment Operator
    DeepCopyRuleOfFive& operator=(DeepCopyRuleOfFive&& other) noexcept {
        if (this != &other) {
            delete data;
            data = other.data;
            other.data = nullptr;  // Nullify the moved-from object
            std::cout << "Move assignment operator called!" << std::endl;
        }
        return *this;
    }

    ~DeepCopyRuleOfFive() {
        delete data;
        std::cout << "Resource deallocated (DeepCopyRuleOfFive)!" << std::endl;
    }

    void display() const {
        if (data)
            std::cout << "Data: " << *data << std::endl;
        else
            std::cout << "Data is null!" << std::endl;
    }
};

int main() {
    DeepCopyRuleOfFive obj1(42);
    DeepCopyRuleOfFive obj2 = std::move(obj1);  // Move constructor

    obj2.display();
    obj1.display();  // obj1 is in a null state after the move

    DeepCopyRuleOfFive obj3(100);
    obj3 = std::move(obj2);  // Move assignment operator

    obj3.display();
    obj2.display();  // obj2 is in a null state after the move

    return 0;
}
