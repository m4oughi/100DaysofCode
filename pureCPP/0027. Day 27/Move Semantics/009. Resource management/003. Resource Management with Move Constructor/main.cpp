#include <iostream>

class Resource {
public:
    Resource() { std::cout << "Acquiring resource" << std::endl; }
    ~Resource() { std::cout << "Releasing resource" << std::endl; }
};

class Manager {
private:
    Resource* res;

public:
    Manager() : res(new Resource()) {}

    // Move constructor
    Manager(Manager&& other) noexcept : res(other.res) {
        other.res = nullptr;  // Transfer ownership
        std::cout << "Moving Manager" << std::endl;
    }

    ~Manager() { delete res; }
};

int main() {
    Manager mgr1;
    Manager mgr2 = std::move(mgr1);  // Resource is moved
}
