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
    ~Manager() { delete res; }
};

int main() {
    Manager mgr;  // Acquires resource, releases on destruction
}
