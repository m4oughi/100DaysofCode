#include <iostream>

namespace OuterNamespace {
    namespace InnerNamespace {
        struct NestedStruct {
            int data;
            void print() const {
                std::cout << "Nested Data: " << data << std::endl;
            }
        };
    }
}

int main() {
    OuterNamespace::InnerNamespace::NestedStruct obj;
    obj.data = 42;
    obj.print();
}
