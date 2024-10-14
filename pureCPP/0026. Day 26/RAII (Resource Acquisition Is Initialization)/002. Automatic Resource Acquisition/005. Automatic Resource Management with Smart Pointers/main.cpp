#include <iostream>
#include <memory>

class Resource {
public:
    Resource() {
        std::cout << "Resource acquired automatically." << std::endl;
    }

    ~Resource() {
        std::cout << "Resource released automatically." << std::endl;
    }

    void use() {
        std::cout << "Using resource." << std::endl;
    }
};

int main() {
    {
        std::unique_ptr<Resource> resource = std::make_unique<Resource>();
        resource->use();
    }  // Resource is automatically released when `resource` goes out of scope.
}
