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

    // Copy constructor
    Manager(const Manager& other) : res(new Resource(*other.res)) {
        std::cout << "Copying Manager" << std::endl;
    }

    // Destructor
    ~Manager() { delete res; }
};

int main() {
    Manager mgr1;
    Manager mgr2 = mgr1;  // Resource is copied
}
