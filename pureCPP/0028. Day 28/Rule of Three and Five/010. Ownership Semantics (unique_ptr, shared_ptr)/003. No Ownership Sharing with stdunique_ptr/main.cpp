#include <iostream>
#include <memory>

class Resource {
public:
    Resource() { std::cout << "Resource acquired!" << std::endl; }
    ~Resource() { std::cout << "Resource destroyed!" << std::endl; }
};

int main() {
    std::unique_ptr<Resource> resourcePtr1 = std::make_unique<Resource>();

    // Uncommenting the next line will cause a compilation error (copy not allowed)
    // std::unique_ptr<Resource> resourcePtr2 = resourcePtr1;

    // Correct way to transfer ownership
    std::unique_ptr<Resource> resourcePtr2 = std::move(resourcePtr1);

    return 0;
}
