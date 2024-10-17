#include <iostream>

class RuleOfFive {
private:
    int* data;

public:
    RuleOfFive() : data(new int(42)) { std::cout << "Constructor" << std::endl; }

    // Copy constructor
    RuleOfFive(const RuleOfFive& other) : data(new int(*other.data)) {
        std::cout << "Copy Constructor" << std::endl;
    }

    // Move constructor
    RuleOfFive(RuleOfFive&& other) noexcept : data(other.data) {
        other.data = nullptr;  // Nullify the source pointer
        std::cout << "Move Constructor" << std::endl;
    }

    ~RuleOfFive() { 
        delete data; 
        std::cout << "Destructor" << std::endl; 
    }
};

int main() {
    RuleOfFive obj1;
    RuleOfFive obj2 = std::move(obj1);  // Calls move constructor
}
