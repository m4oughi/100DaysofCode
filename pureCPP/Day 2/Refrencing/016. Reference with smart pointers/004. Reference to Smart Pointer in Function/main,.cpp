#include <iostream>
#include <memory>

class MyClass {
public:
    void greet() const {
        std::cout << "Hello from MyClass" << std::endl;
    }
};

void process(std::shared_ptr<MyClass>& sptr) {
    sptr->greet();
}

int main() {
    auto sptr = std::make_shared<MyClass>();  // Create a shared_ptr
    process(sptr);  // Pass shared_ptr by reference

    return 0;
}
