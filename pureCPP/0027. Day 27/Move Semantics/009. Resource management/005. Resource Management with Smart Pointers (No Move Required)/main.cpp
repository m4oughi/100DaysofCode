#include <iostream>
#include <memory>

class Resource {
public:
    Resource() { std::cout << "Acquiring resource" << std::endl; }
    ~Resource() { std::cout << "Releasing resource" << std::endl; }
};

class Manager {
private:
    std::unique_ptr<Resource> res;

public:
    Manager() : res(std::make_unique<Resource>()) {}

    // Default move constructor and move assignment operator are sufficient
};

int main() {
    Manager mgr1;
    Manager mgr2 = std::move(mgr1);  // Resource is moved automatically with std::unique_ptr
}
