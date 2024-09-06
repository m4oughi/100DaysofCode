#include <iostream>
#include <memory>

class MyClass {
public:
    ~MyClass() {
        std::cout << "MyClass destroyed" << std::endl;
    }
    void info() const {
        std::cout << "MyClass instance" << std::endl;
    }
};

void customDeleter(MyClass* ptr) {
    std::cout << "Custom deleter called" << std::endl;
    delete ptr;
}

void process(std::unique_ptr<MyClass, decltype(&customDeleter)>& uptr) {
    uptr->info();
}

int main() {
    auto uptr = std::unique_ptr<MyClass, decltype(&customDeleter)>(new MyClass(), customDeleter);
    process(uptr);  // Pass unique_ptr with custom deleter by reference

    return 0;
}
