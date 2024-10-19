#include <iostream>

class DeepCopyRuleOfThree {
    int* data;
public:
    DeepCopyRuleOfThree(int value) : data(new int(value)) {
        std::cout << "Resource allocated (DeepCopyRuleOfThree)!" << std::endl;
    }

    // Copy Constructor (Deep Copy)
    DeepCopyRuleOfThree(const DeepCopyRuleOfThree& other) : data(new int(*other.data)) {
        std::cout << "Deep copy constructor called!" << std::endl;
    }

    // Copy Assignment Operator (Deep Copy)
    DeepCopyRuleOfThree& operator=(const DeepCopyRuleOfThree& other) {
        if (this != &other) {
            delete data;
            data = new int(*other.data);
            std::cout << "Deep copy assignment operator called!" << std::endl;
        }
        return *this;
    }

    ~DeepCopyRuleOfThree() {
        delete data;
        std::cout << "Resource deallocated (DeepCopyRuleOfThree)!" << std::endl;
    }

    void display() const {
        std::cout << "Data: " << *data << std::endl;
    }
};

int main() {
    DeepCopyRuleOfThree obj1(42);
    DeepCopyRuleOfThree obj2 = obj1;  // Deep copy using copy constructor
    DeepCopyRuleOfThree obj3(100);
    obj3 = obj1;  // Deep copy using copy assignment operator

    obj1.display();
    obj2.display();
    obj3.display();

    return 0;
}
