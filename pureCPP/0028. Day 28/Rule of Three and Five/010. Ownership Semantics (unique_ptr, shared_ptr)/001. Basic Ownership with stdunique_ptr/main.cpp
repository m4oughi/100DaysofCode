#include <iostream>
#include <memory>

class Resource {
public:
    Resource() { std::cout << "Resource acquired!" << std::endl; }
    ~Resource() { std::cout << "Resource destroyed!" << std::endl; }
    void sayHello() { std::cout << "Hello from Resource!" << std::endl; }
};

int main() {
    std::unique_ptr<Resource> resourcePtr = std::make_unique<Resource>();
    resourcePtr->sayHello();

    // Resource automatically deleted when resourcePtr goes out of scope
    return 0;
}
