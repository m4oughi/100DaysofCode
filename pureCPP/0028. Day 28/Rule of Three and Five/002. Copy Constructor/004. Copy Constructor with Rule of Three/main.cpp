#include <iostream>

class RuleOfThree {
    int* data;
public:
    RuleOfThree(int value) {
        data = new int(value);
        std::cout << "Constructor called!" << std::endl;
    }

    // Copy Constructor (Deep Copy)
    RuleOfThree(const RuleOfThree& other) {
        data = new int(*other.data);  // Deep copy
        std::cout << "Copy Constructor called!" << std::endl;
    }

    // Copy Assignment Operator
    RuleOfThree& operator=(const RuleOfThree& other) {
        if (this != &other) {
            delete data;  // Free existing memory
            data = new int(*other.data);  // Deep copy
            std::cout << "Copy Assignment called!" << std::endl;
        }
        return *this;
    }

    ~RuleOfThree() {
        delete data;  // Free dynamically allocated memory
        std::cout << "Destructor called!" << std::endl;
    }

    void display() const {
        std::cout << "Data: " << *data << std::endl;
    }
};

int main() {
    RuleOfThree obj1(40);
    RuleOfThree obj2 = obj1;  // Copy constructor
    RuleOfThree obj3(50);
    obj3 = obj2;  // Copy assignment operator
    obj2.display();
    obj3.display();
    return 0;
}
