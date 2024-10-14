#include <iostream>
#include <memory>

class MyClass {
public:
    MyClass() { std::cout << "Constructor called" << std::endl; }
    ~MyClass() { std::cout << "Destructor called" << std::endl; }
};

int main() {
    {
        std::shared_ptr<MyClass> ptr1 = std::make_shared<MyClass>();
        std::shared_ptr<MyClass> ptr2 = ptr1;  // Shared ownership
        std::cout << "Reference count: " << ptr1.use_count() << std::endl;
    }  // ptr1 and ptr2 go out of scope

    std::cout << "All shared_ptrs out of scope, object should be destroyed." << std::endl;
    return 0;
}
