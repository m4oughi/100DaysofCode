#include <iostream>
#include <memory>

class Resource {
public:
    Resource() { std::cout << "Resource acquired!" << std::endl; }
    ~Resource() { std::cout << "Resource destroyed!" << std::endl; }
    void sayHello() { std::cout << "Hello from Resource!" << std::endl; }
};

int main() {
    std::shared_ptr<Resource> sharedPtr1 = std::make_shared<Resource>();
    std::shared_ptr<Resource> sharedPtr2 = sharedPtr1;  // Shared ownership

    sharedPtr1->sayHello();
    sharedPtr2->sayHello();

    std::cout << "Shared ownership count: " << sharedPtr1.use_count() << std::endl;

    // Resource destroyed when the last shared pointer goes out of scope
    return 0;
}
