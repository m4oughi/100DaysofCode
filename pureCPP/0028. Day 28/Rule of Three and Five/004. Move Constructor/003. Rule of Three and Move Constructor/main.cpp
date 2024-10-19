#include <iostream>

class RuleOfThreeMove {
    int* data;
public:
    RuleOfThreeMove(int value) {
        data = new int(value);
        std::cout << "Constructor called!" << std::endl;
    }

    // Copy Constructor
    RuleOfThreeMove(const RuleOfThreeMove& other) {
        data = new int(*other.data);  // Deep copy
        std::cout << "Copy Constructor called!" << std::endl;
    }

    // Copy Assignment Operator
    RuleOfThreeMove& operator=(const RuleOfThreeMove& other) {
        if (this != &other) {
            delete data;
            data = new int(*other.data);  // Deep copy
            std::cout << "Copy Assignment Operator called!" << std::endl;
        }
        return *this;
    }

    // Move Constructor
    RuleOfThreeMove(RuleOfThreeMove&& other) noexcept {
        data = other.data;  // Transfer ownership
        other.data = nullptr;  // Nullify the source
        std::cout << "Move Constructor called!" << std::endl;
    }

    ~RuleOfThreeMove() {
        delete data;  // Free memory
        std::cout << "Destructor called!" << std::endl;
    }

    void display() const {
        if (data)
            std::cout << "Data: " << *data << std::endl;
        else
            std::cout << "Data is null" << std::endl;
    }
};

int main() {
    RuleOfThreeMove obj1(30);
    RuleOfThreeMove obj2 = std::move(obj1);  // Move constructor
    obj2.display();
    obj1.display();
    return 0;
}
