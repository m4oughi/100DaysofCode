#include <iostream>

namespace MyNamespace {
    struct SimpleStruct {
        int num;
        void print() const {
            std::cout << "Number: " << num << std::endl;
        }
    };
}

int main() {
    using MyNamespace::SimpleStruct;  // Bring struct into current scope
    SimpleStruct obj;
    obj.num = 20;
    obj.print();
}
