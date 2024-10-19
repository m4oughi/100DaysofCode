#include <iostream>
#include <memory>

void customDeleter(Resource* ptr) {
    std::cout << "Custom deleter called!" << std::endl;
    delete ptr;
}

class Resource {
public:
    Resource() { std::cout << "Resource acquired!" << std::endl; }
    ~Resource() { std::cout << "Resource destroyed!" << std::endl; }
};

int main() {
    std::shared_ptr<Resource> resourcePtr(new Resource(), customDeleter);
    
    // When the shared pointer goes out of scope, the custom deleter is invoked
    return 0;
}
