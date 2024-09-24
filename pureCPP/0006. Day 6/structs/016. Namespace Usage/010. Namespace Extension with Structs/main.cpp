#include <iostream>

namespace MyNamespace {
    struct ExtendedStruct {
        int data;
    };
}

// Extending namespace
namespace MyNamespace {
    void printData(const ExtendedStruct& obj) {
        std::cout << "ExtendedStruct Data: " << obj.data << std::endl;
    }
}

int main() {
    MyNamespace::ExtendedStruct obj;
    obj.data = 123;
    MyNamespace::printData(obj);  // Using extended function
}
