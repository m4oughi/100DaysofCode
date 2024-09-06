#include <iostream>
#include <memory>

class MyClass {
public:
    void display() const {
        std::cout << "MyClass object" << std::endl;
    }
};

int main() {
    auto sptr = std::make_shared<MyClass>();  // Create a shared_ptr
    MyClass& ref = *sptr;  // Create a reference to the object managed by shared_ptr

    sptr->display();  // Using smart pointer
    ref.display();    // Using reference

    return 0;
}
