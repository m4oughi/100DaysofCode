#include <iostream>
#include <new>

class ResourceHandler {
private:
    int* resource1;
    int* resource2;

public:
    ResourceHandler() {
        try {
            resource1 = new int[100000000000];  // Try allocating a large resource
            resource2 = new int[100000000000];  // Try allocating another large resource
            std::cout << "Resources allocated successfully" << std::endl;
        } catch (const std::bad_alloc& e) {
            std::cout << "Memory allocation failed: " << e.what() << std::endl;
        }
    }

    ~ResourceHandler() {
        delete[] resource1;
        delete[] resource2;
        std::cout << "Resources cleaned up" << std::endl;
    }
};

int main() {
    ResourceHandler handler;
    return 0;
}
