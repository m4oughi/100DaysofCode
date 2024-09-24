#include <iostream>

namespace {
    struct HiddenStruct {
        int value;
        void display() const {
            std::cout << "Anonymous Namespace Value: " << value << std::endl;
        }
    };
}

int main() {
    HiddenStruct obj;
    obj.value = 15;
    obj.display();
}
