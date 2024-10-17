#include <iostream>
#include <vector>

class Resource {
public:
    Resource() { std::cout << "Acquiring resource" << std::endl; }
    ~Resource() { std::cout << "Releasing resource" << std::endl; }
    Resource(const Resource&) = delete;            // No copy
    Resource& operator=(const Resource&) = delete; // No copy
    Resource(Resource&&) noexcept = default;       // Enable move
    Resource& operator=(Resource&&) noexcept = default; // Enable move
};

int main() {
    std::vector<Resource> resources;
    resources.push_back(Resource());  // Moved into the vector
    resources.emplace_back();         // Constructed in-place

    std::vector<Resource> newResources = std::move(resources);  // Moved to a new container
}
