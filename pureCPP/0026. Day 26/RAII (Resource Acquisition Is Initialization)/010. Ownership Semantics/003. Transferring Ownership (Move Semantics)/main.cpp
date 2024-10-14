#include <iostream>
#include <memory>

class ResourceOwner {
    std::unique_ptr<int> resource;

public:
    ResourceOwner(std::unique_ptr<int> res) : resource(std::move(res)) {
        std::cout << "Resource acquired." << std::endl;
    }

    ~ResourceOwner() {
        std::cout << "Resource released automatically." << std::endl;
    }
};

int main() {
    std::unique_ptr<int> resource = std::make_unique<int>(100);
    ResourceOwner owner(std::move(resource));  // Ownership transferred.
    // `resource` is now nullptr, and `owner` is responsible for releasing the resource.
}
