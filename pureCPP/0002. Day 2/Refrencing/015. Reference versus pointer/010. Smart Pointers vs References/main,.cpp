#include <iostream>
#include <memory>

class MyClass {
public:
    void print() const {
        std::cout << "MyClass object" << std::endl;
    }
};

int main() {
    std::shared_ptr<MyClass> sptr = std::make_shared<MyClass>();
    MyClass& ref = *sptr;  // Reference to the object managed by shared_ptr

    sptr->print();  // Using smart pointer
    ref.print();    // Using reference

    return 0;
}
