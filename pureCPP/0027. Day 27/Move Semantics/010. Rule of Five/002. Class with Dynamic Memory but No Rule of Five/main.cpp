#include <iostream>

class NoRuleOfFive {
private:
    int* data;

public:
    NoRuleOfFive() : data(new int(42)) { std::cout << "Constructor" << std::endl; }
    ~NoRuleOfFive() { delete data; std::cout << "Destructor" << std::endl; }
};

int main() {
    NoRuleOfFive obj;
}
