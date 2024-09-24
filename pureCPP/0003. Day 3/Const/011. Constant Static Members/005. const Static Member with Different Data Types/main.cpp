#include <iostream>

class MyClass {
public:
    static const int intValue = 70;
    static const double doubleValue;
    static const std::string stringValue;

    void printValues() const {
        std::cout << intValue << " " << doubleValue << " " << stringValue << std::endl;
    }
};

const double MyClass::doubleValue = 80.5;
const std::string MyClass::stringValue = "Hello";

int main() {
    MyClass obj;
    obj.printValues(); // Prints 70 80.5 Hello
}
