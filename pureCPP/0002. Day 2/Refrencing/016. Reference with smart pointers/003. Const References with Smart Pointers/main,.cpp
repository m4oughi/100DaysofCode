#include <iostream>
#include <memory>

class MyClass {
public:
    void display() const {
        std::cout << "Const display" << std::endl;
    }
};

void process(const MyClass& obj) {
    obj.display();
}

int main() {
    auto sptr = std::make_shared<MyClass>();  // Create a shared_ptr
    process(*sptr);  // Pass reference to function

    return 0;
}
