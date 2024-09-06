#include <iostream>

class Resource {
public:
    Resource() { std::cout << "Resource acquired" << std::endl; }
    ~Resource() { std::cout << "Resource destroyed" << std::endl; }

    // Move constructor
    Resource(Resource &&other) {
        std::cout << "Resource moved" << std::endl;
    }
};

Resource createResource() {
    return Resource();  // Temporary (R-value) returned
}

int main() {
    Resource res = createResource();  // Move constructor is called

    return 0;
}