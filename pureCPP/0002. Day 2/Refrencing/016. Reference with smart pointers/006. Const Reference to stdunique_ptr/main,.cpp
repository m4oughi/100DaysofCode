#include <iostream>
#include <memory>

class MyClass {
public:
    void display() const {
        std::cout << "Unique pointer with const reference" << std::endl;
    }
};

void show(const MyClass& obj) {
    obj.display();
}

int main() {
    auto uptr = std::make_unique<MyClass>();
    show(*uptr);  // Pass the object pointed to by unique_ptr

    return 0;
}
