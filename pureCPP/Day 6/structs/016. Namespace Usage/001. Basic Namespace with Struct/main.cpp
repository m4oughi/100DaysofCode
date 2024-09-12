#include <iostream>

namespace MyNamespace {
    struct BasicStruct {
        int value;
        
        void display() const {
            std::cout << "Value: " << value << std::endl;
        }
    };
}

int main() {
    MyNamespace::BasicStruct obj;
    obj.value = 10;
    obj.display();
}
