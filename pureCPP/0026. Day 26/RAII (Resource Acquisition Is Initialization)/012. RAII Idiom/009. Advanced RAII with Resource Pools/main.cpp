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
        for (Resource* res : pool) {
            delete res;
        }
    }
};

class PoolResourceGuard {
    Resource* resource;
    ResourcePool& pool;

public:
    PoolResourceGuard(ResourcePool& pool) : pool(pool) {
        resource = pool.acquire();
    }

    ~PoolResourceGuard() {
        pool.release(resource);
    }
};

int main() {
    ResourcePool pool;
    {
        PoolResourceGuard guard(pool);
    }  // Resource is automatically returned to the pool when `guard` goes out of scope.
    std::cout << "Resource pool managed by RAII." << std::endl;
}
