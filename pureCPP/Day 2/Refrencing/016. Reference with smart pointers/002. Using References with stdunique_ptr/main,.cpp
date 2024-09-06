#include <iostream>
#include <memory>

class MyClass {
public:
    void show() const {
        std::cout << "MyClass object with unique_ptr" << std::endl;
    }
};

int main() {
    auto uptr = std::make_unique<MyClass>();  // Create a unique_ptr
    MyClass& ref = *uptr;  // Create a reference to the object managed by unique_ptr

    uptr->show();  // Using unique_ptr
    ref.show();    // Using reference

    return 0;
}
