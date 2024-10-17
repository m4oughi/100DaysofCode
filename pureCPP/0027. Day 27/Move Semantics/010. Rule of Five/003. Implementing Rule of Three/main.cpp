#include <iostream>

class RuleOfThree {
private:
    int* data;

public:
    RuleOfThree() : data(new int(42)) { std::cout << "Constructor" << std::endl; }

    // Copy constructor
    RuleOfThree(const RuleOfThree& other) : data(new int(*other.data)) {
        std::cout << "Copy Constructor" << std::endl;
    }

    // Copy assignment operator
    RuleOfThree& operator=(const RuleOfThree& other) {
        if (this != &other) {
            delete data;
            data = new int(*other.data);
            std::cout << "Copy Assignment Operator" << std::endl;
        }
        return *this;
    }

    ~RuleOfThree() { delete data; std::cout << "Destructor" << std::endl; }
};

int main() {
    RuleOfThree obj1;
    RuleOfThree obj2 = obj1;  // Calls copy constructor
    obj2 = obj1;              // Calls copy assignment operator
}
