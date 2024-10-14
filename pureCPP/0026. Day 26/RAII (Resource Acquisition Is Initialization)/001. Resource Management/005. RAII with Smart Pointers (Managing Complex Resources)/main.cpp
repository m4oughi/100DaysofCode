#include <iostream>
#include <memory>

class Resource {
public:
    Resource() {
        std::cout << "Resource acquired." << std::endl;
    }

    ~Resource() {
        std::cout << "Resource released." << std::endl;
    }

    void doSomething() {
        std::cout << "Doing something with the resource." << std::endl;
    }
};

int main() {
    {
        std::unique_ptr<Resource> resource = std::make_unique<Resource>();
        resource->doSomething();
    }  // The resource is automatically released when `resource` goes out of scope.
}
