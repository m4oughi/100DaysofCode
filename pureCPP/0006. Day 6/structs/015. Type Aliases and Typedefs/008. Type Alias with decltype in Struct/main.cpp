#include <iostream>

struct DecltypeAlias {
    int value;
    
    using ValueType = decltype(value);  // Type alias using decltype
    
    void printType(ValueType v) {
        std::cout << "Value: " << v << std::endl;
    }
};

int main() {
    DecltypeAlias obj;
    obj.value = 42;
    obj.printType(100);
}
