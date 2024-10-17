#include <iostream>
#include <memory>

class SmartRuleOfFive {
private:
    std::unique_ptr<int> data;

public:
    SmartRuleOfFive() : data(std::make_unique<int>(42)) {
        std::cout << "Constructor" << std::endl;
    }

    // Move constructor (copy and copy assignment are deleted by default)
    SmartRuleOfFive(SmartRuleOfFive&& other) noexcept = default;

    // Move assignment operator
    SmartRuleOfFive& operator=(SmartRuleOfFive&& other) noexcept = default;

    ~SmartRuleOfFive() { std::cout << "Destructor" << std::endl; }
};

int main() {
    SmartRuleOfFive obj1;
    SmartRuleOfFive obj2 = std::move(obj1);  // Calls move constructor
}
