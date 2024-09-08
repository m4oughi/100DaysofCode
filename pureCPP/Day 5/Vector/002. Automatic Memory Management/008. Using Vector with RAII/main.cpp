#include <iostream>
#include <vector>

class Resource {
public:
    Resource() { std::cout << "Resource acquired\n"; }
    ~Resource() { std::cout << "Resource released\n"; }
};

int main() {
    std::vector<Resource> resources(5);  // Automatically acquires and releases resources

    // No need to manually release resources; vector handles it

    return 0;
}
