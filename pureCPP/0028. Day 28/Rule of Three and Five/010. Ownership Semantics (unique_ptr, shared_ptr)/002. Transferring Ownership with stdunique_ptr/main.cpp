#include <iostream>
#include <memory>

class Resource {
public:
    Resource() { std::cout << "Resource acquired!" << std::endl; }
    ~Resource() { std::cout << "Resource destroyed!" << std::endl; }
    void sayHello() { std::cout << "Hello from Resource!" << std::endl; }
};

int main() {
    std::unique_ptr<Resource> resourcePtr1 = std::make_unique<Resource>();

    // Transfer ownership to another unique_ptr
    std::unique_ptr<Resource> resourcePtr2 = std::move(resourcePtr1);

    if (!resourcePtr1) {
        std::cout << "resourcePtr1 no longer owns the resource!" << std::endl;
    }

    resourcePtr2->sayHello();
    // Resource will be destroyed when resourcePtr2 goes out of scope
    return 0;
}
