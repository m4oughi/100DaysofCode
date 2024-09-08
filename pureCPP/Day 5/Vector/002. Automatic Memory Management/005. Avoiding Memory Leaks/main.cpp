#include <iostream>
#include <vector>
#include <memory>

class Resource {
public:
    Resource() { std::cout << "Resource acquired\n"; }
    ~Resource() { std::cout << "Resource released\n"; }
};

int main() {
    std::vector<std::unique_ptr<Resource>> resources;

    resources.push_back(std::make_unique<Resource>());  // Memory is managed by vector
    resources.push_back(std::make_unique<Resource>());

    // Memory is automatically released when vector goes out of scope

    return 0;
}
