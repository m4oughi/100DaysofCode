#include <iostream>
#include <memory>

class Resource {
public:
    Resource() {
        std::cout << "Resource acquired." << std::endl;
    }
    ~Resource() {
        std::cout << "Resource released." << std::endl;
    }
};

class ResourceManager {
    std::shared_ptr<Resource> resource;

public:
    ResourceManager(std::shared_ptr<Resource> res) : resource(res) {}
    
    void useResource() {
        std::cout << "Using shared resource." << std::endl;
    }
};

int main() {
    std::shared_ptr<Resource> sharedRes = std::make_shared<Resource>();

    {
        ResourceManager manager1(sharedRes);
        ResourceManager manager2(sharedRes);  // Shared ownership of `sharedRes`.
        manager1.useResource();
        manager2.useResource();
    }  // Resource is still alive since `sharedRes` is still in scope.

    std::cout << "End of program." << std::endl;
}  // Resource is released when `sharedRes` goes out of scope.
