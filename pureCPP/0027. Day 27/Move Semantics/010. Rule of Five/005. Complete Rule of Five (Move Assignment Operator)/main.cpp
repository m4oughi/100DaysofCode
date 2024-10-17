#include <iostream>

class CompleteRuleOfFive {
private:
    int* data;

public:
    CompleteRuleOfFive() : data(new int(42)) { std::cout << "Constructor" << std::endl; }

    // Copy constructor
    CompleteRuleOfFive(const CompleteRuleOfFive& other) : data(new int(*other.data)) {
        std::cout << "Copy Constructor" << std::endl;
    }

    // Move constructor
    CompleteRuleOfFive(CompleteRuleOfFive&& other) noexcept : data(other.data) {
        other.data = nullptr;
        std::cout << "Move Constructor" << std::endl;
    }

    // Copy assignment operator
    CompleteRuleOfFive& operator=(const CompleteRuleOfFive& other) {
        if (this != &other) {
            delete data;
            data = new int(*other.data);
            std::cout << "Copy Assignment Operator" << std::endl;
        }
        return *this;
    }

    // Move assignment operator
    CompleteRuleOfFive& operator=(CompleteRuleOfFive&& other) noexcept {
        if (this != &other) {
            delete data;
            data = other.data;
            other.data = nullptr;
            std::cout << "Move Assignment Operator" << std::endl;
        }
        return *this;
    }

    ~CompleteRuleOfFive() { delete data; std::cout << "Destructor" << std::endl; }
};

int main() {
    CompleteRuleOfFive obj1;
    CompleteRuleOfFive obj2 = std::move(obj1);  // Calls move constructor

    CompleteRuleOfFive obj3;
    obj3 = std::move(obj2);  // Calls move assignment operator
}
