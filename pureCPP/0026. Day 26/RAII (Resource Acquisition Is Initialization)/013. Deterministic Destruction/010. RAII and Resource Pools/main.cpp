#include <iostream>
#include <vector>

class Resource {
public:
    Resource() {
        std::cout << "Resource acquired." << std::endl;
    }

    ~Resource() {
        std::cout << "Resource released." << std::endl;
    }
};

class ResourcePool {
    std::vector<Resource*> pool;
public:
    Resource* acquire() {
        if (pool.empty()) {
            return new Resource();
        } else {
            Resource* res = pool.back();
            pool.pop_back();
            return res;
        }
    }

    void release(Resource* res) {
        pool.push_back(res);
    }

    ~ResourcePool() {
        while (!pool.empty()) {
            delete pool.back();
            pool.pop_back();
        }
    }
};

class RAIIWrapper {
    Resource* resource;
    ResourcePool& pool;

public:
    RAIIWrapper(ResourcePool& pool)
        : pool(pool), resource(pool.acquire()) {}

    ~RAIIWrapper() {
        pool.release(resource);
    }
};

int main() {
    ResourcePool pool;
    {
        RAIIWrapper wrapper(pool);
        // Resource is automatically returned to the pool when `wrapper` goes out of scope.
    }
    std::cout << "Resource returned to the pool." << std::endl;
}
