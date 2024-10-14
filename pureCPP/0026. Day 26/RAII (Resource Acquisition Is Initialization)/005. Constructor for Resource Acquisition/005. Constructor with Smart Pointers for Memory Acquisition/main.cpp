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

    void use() {
        std::cout << "Using resource." << std::endl;
    }
};

class ResourceManager {
    std::unique_ptr<Resource> resource;

public:
    // Constructor acquires the resource using a smart pointer.
    ResourceManager() : resource(std::make_unique<Resource>()) {}

    void useResource() {
        resource->use();
    }
};

int main() {
    {
        ResourceManager manager;
        manager.useResource();
    }  // Resource is released automatically when `manager` goes out of scope.
}
