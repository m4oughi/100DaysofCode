#include <iostream>
#include <memory>

class MyClass {
public:
    MyClass() { std::cout << "MyClass Constructor" << std::endl; }
    ~MyClass() { std::cout << "MyClass Destructor" << std::endl; }
};

int main() {
    {
        std::shared_ptr<MyClass> ptr1 = std::make_shared<MyClass>();
        std::shared_ptr<MyClass> ptr2 = ptr1;  // Shared ownership of the object

        std::cout << "Shared pointer reference count: " << ptr1.use_count() << std::endl;
    }  // Both ptr1 and ptr2 go out of scope, memory is automatically deallocated

    std::cout << "End of main" << std::endl;
    return 0;
}
