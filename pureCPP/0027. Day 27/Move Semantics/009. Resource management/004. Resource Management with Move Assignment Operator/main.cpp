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

    // Move assignment operator
    Manager& operator=(Manager&& other) noexcept {
        if (this != &other) {
            delete res;          // Free existing resource
            res = other.res;     // Transfer ownership
            other.res = nullptr; // Nullify the source pointer
            std::cout << "Move-assigning Manager" << std::endl;
        }
        return *this;
    }

    ~Manager() { delete res; }
};

int main() {
    Manager mgr1;
    Manager mgr2;
    mgr2 = std::move(mgr1);  // Resource is moved using move assignment
}
