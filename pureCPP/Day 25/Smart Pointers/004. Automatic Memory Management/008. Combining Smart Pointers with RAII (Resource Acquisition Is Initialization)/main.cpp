#include <iostream>
#include <memory>

class Resource {
public:
    Resource() { std::cout << "Resource acquired" << std::endl; }
    ~Resource() { std::cout << "Resource released" << std::endl; }
};

void useResource() {
    std::unique_ptr<Resource> resPtr = std::make_unique<Resource>();  // Acquires resource
    std::cout << "Using resource" << std::endl;
    // Resource is automatically released when resPtr goes out of scope
}

int main() {
    useResource();  // Resource is acquired and released within the function scope
    std::cout << "End of main" << std::endl;
    return 0;
}
