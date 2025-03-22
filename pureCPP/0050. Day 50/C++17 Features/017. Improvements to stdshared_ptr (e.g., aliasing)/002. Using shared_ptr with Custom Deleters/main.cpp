#include <iostream>
#include <memory>

struct Resource {
    Resource() { std::cout << "Resource acquired\n"; }
    ~Resource() { std::cout << "Resource released\n"; }
};

int main() {
    auto deleter = [](Resource* r) {
        std::cout << "Custom deleter called\n";
        delete r;
    };

    std::shared_ptr<Resource> ptr(new Resource(), deleter);
    return 0;
}
