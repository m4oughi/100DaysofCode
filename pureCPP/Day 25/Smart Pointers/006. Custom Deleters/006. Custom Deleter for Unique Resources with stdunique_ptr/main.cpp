#include <iostream>
#include <memory>

struct Resource {
    Resource() { std::cout << "Resource acquired" << std::endl; }
    ~Resource() { std::cout << "Resource released" << std::endl; }
};

void customDeleter(Resource* res) {
    std::cout << "Custom deleter for Resource called" << std::endl;
    delete res;
}

int main() {
    std::unique_ptr<Resource, decltype(&customDeleter)> ptr(new Resource(), customDeleter);

    // Resource will be released when ptr goes out of scope, using the custom deleter
    return 0;
}
