#include <iostream>
#include <memory>

class Resource {
public:
    Resource() { std::cout << "Resource acquired" << std::endl; }
    ~Resource() { std::cout << "Resource released" << std::endl; }
};

void processResource(std::unique_ptr<Resource> res) {
    std::cout << "Processing resource..." << std::endl;
}

int main() {
    auto uniquePtr = std::make_unique<Resource>();
    processResource(std::move(uniquePtr));  // Transfer ownership safely

    return 0;
}
