#include <iostream>

class CustomResource {
    void* resource;
public:
    CustomResource(size_t size) {
        // Simulate allocating a custom resource (e.g., a buffer)
        resource = ::operator new(size);
        std::cout << "Custom resource allocated with size " << size << " bytes." << std::endl;
    }

    ~CustomResource() {
        // Simulate deallocating the custom resource
        ::operator delete(resource);
        std::cout << "Custom resource deallocated." << std::endl;
    }

    void useResource() {
        std::cout << "Using custom resource." << std::endl;
    }
};

int main() {
    {
        CustomResource res(100);
        res.useResource();
    }
    // Custom resource is automatically deallocated when res goes out of scope
    return 0;
}
