#include <iostream>
#include <memory>
#include <map>

struct Resource {
    int id;
    Resource(int id) : id(id) {
        std::cout << "Resource " << id << " acquired" << std::endl;
    }
    ~Resource() {
        std::cout << "Resource " << id << " released" << std::endl;
    }
};

int main() {
    std::map<int, std::unique_ptr<Resource>> resourceMap;

    // Use a lambda as a custom deleter
    resourceMap[1] = std::unique_ptr<Resource, void(*)(Resource*)>(
        new Resource(1), [](Resource* r) { 
            std::cout << "Custom deleter called for resource " << r->id << std::endl;
            delete r; 
        }
    );

    resourceMap[2] = std::make_unique<Resource>(2);  // Normal unique_ptr without a custom deleter

    // Resources are released automatically when the map is destroyed or elements are removed
    return 0;
}
