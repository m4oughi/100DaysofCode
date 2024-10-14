#include <iostream>
#include <memory>

class Resource {
public:
    Resource() { std::cout << "Resource acquired." << std::endl; }
    ~Resource() { std::cout << "Resource released." << std::endl; }
};

class ResourceManager {
    std::shared_ptr<Resource> sharedResource;

public:
    void acquireResource() {
        sharedResource = std::make_shared<Resource>();
    }

    std::shared_ptr<Resource> getResource() {
        return sharedResource;
    }
};

class ResourceUser {
    std::shared_ptr<Resource> resource;

public:
    ResourceUser(std::shared_ptr<Resource> res) : resource(res) {
        std::cout << "Resource being used." << std::endl;
    }
};

int main() {
    ResourceManager manager;
    manager.acquireResource();
    
    {
        ResourceUser user1(manager.getResource());  // Shared ownership.
        ResourceUser user2(manager.getResource());  // Shared ownership.
        std::cout << "Multiple users sharing the resource." << std::endl;
    }  // Resource is not released yet since it's still owned by `manager`.
    
    // Resource will only be released when `manager`'s `sharedResource` goes out of scope.
}
