#include <iostream>
#include <memory>

class Resource {
public:
    Resource() {
        std::cout << "Resource acquired." << std::endl;
    }

    ~Resource() {
        std::cout << "Resource released in destructor." << std::endl;
    }

    void use() {
        std::cout << "Using resource." << std::endl;
    }
};

class ResourceManager {
    std::unique_ptr<Resource> resource;

public:
    ResourceManager() : resource(std::make_unique<Resource>()) {}

    void useResource() {
        resource->use();
    }

    // Destructor releases the smart pointer automatically.
    ~ResourceManager() {
        // unique_ptr will automatically release the memory.
    }
};

int main() {
    {
        ResourceManager manager;
        manager.useResource();
    }  // Resource is released automatically by the smart pointer in the destructor.
}
