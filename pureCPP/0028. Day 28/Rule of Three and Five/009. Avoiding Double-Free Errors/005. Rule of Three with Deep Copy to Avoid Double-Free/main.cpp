#include <iostream>

class RuleOfThree {
    int* data;
public:
    RuleOfThree(int value) : data(new int(value)) {
        std::cout << "Resource allocated (RuleOfThree)!" << std::endl;
    }

    // Copy Constructor (Deep Copy)
    RuleOfThree(const RuleOfThree& other) : data(new int(*other.data)) {
        std::cout << "Deep copy constructor called!" << std::endl;
    }

    // Copy Assignment Operator (Deep Copy)
    RuleOfThree& operator=(const RuleOfThree& other) {
        if (this != &other) {
            delete data;
            data = new int(*other.data);
            std::cout << "Deep copy assignment operator called!" << std::endl;
        }
        return *this;
    }

    ~RuleOfThree() {
        delete data;
        std::cout << "Resource deallocated (RuleOfThree)!" << std::endl;
    }

    void display() const {
        std::cout << "Data: " << *data << std::endl;
    }
};

int main() {
    RuleOfThree obj1(42);
    RuleOfThree obj2 = obj1;  // Deep copy constructor
    RuleOfThree obj3(100);
    obj3 = obj1;  // Deep copy assignment operator

    obj1.display();
    obj2.display();
    obj3.display();

    return 0;
}
