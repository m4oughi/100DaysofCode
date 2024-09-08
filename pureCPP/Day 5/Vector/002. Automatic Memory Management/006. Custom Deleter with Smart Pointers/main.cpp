#include <iostream>
#include <vector>
#include <memory>

class Resource {
public:
    Resource() { std::cout << "Resource acquired\n"; }
    ~Resource() { std::cout << "Resource released\n"; }
};

void customDeleter(Resource* p) {
    std::cout << "Custom deleting resource\n";
    delete p;
}

int main() {
    std::vector<std::unique_ptr<Resource, decltype(&customDeleter)>> resources;

    resources.push_back(std::unique_ptr<Resource, decltype(&customDeleter)>(new Resource(), &customDeleter));
    resources.push_back(std::unique_ptr<Resource, decltype(&customDeleter)>(new Resource(), &customDeleter));

    // Memory is managed by vector, custom deleter is called automatically

    return 0;
}
