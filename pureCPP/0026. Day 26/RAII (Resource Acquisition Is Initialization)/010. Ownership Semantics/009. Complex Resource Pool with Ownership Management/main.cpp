#include <iostream>
#include <memory>
#include <vector>

class Resource {
public:
    Resource(int id) : id(id) {
        std::cout << "Resource " << id << " acquired." << std::endl;
    }

    ~Resource() {
        std::cout << "Resource " << id << " released." << std::endl;
    }

private:
    int id;
};

class ResourcePool {
    std::vector<std::shared_ptr<Resource>> resources;

public:
    std::shared_ptr<Resource> acquireResource(int id) {
        auto resource = std::make_shared<Resource>(id);
        resources.push_back(resource);
        return resource;  // Shared ownership allows resource reuse.
    }

    void releaseAll() {
        resources.clear();  // Release all resources at once.
        std::cout << "All resources released." << std::endl;
    }
};

int main() {
    ResourcePool pool;
    
    {
        auto resource1 = pool.acquireResource(1);
        auto resource2 = pool.acquireResource(2);
        std::cout << "Using resources." << std::endl;
    }  // Resources remain in the pool, shared ownership still holds.
    
    pool.releaseAll();  // Explicitly release all resources at once.
}
