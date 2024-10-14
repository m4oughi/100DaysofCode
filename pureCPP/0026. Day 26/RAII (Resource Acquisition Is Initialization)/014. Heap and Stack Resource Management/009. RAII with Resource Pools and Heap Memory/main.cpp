#include <iostream>
#include <vector>

class Resource {
public:
    Resource() {
        std::cout << "Heap resource acquired." << std::endl;
    }

    ~Resource() {
        std::cout << "Heap resource released." << std::endl;
    }
};

class ResourcePool {
    std::vector<std::unique_ptr<Resource>> pool;
public:
    Resource* acquire() {
        pool.emplace_back(std::make_unique<Resource>());
        return pool.back().get();
    }
};

int main() {
    ResourcePool pool;
    {
        Resource* res = pool.acquire();
        // The pool manages the heap resources.
    }
    std::cout << "Heap resources will be released automatically." << std::endl;
}
