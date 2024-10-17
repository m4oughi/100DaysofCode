#include <iostream>
#include <memory>

class Resource {
public:
    Resource() { std::cout << "Acquiring resource" << std::endl; }
    ~Resource() { std::cout << "Releasing resource" << std::endl; }
};

class Manager {
private:
    std::shared_ptr<Resource> res;

public:
    Manager() : res(std::make_shared<Resource>()) {}

    // Shared ownership allows multiple managers to share the resource
};

int main() {
    Manager mgr1;
    Manager mgr2 = mgr1;  // Both managers share the same resource
}
