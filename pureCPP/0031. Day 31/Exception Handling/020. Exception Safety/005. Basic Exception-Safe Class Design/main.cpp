#include <iostream>
#include <memory>
#include <stdexcept>

class ResourceHandler {
public:
    ResourceHandler(int size) : data(nullptr) {
        data = new int[size];  // May throw bad_alloc
        if (size < 0) {
            throw std::runtime_error("Negative size not allowed!");
        }
    }

    ~ResourceHandler() {
        delete[] data;  // Ensures resources are freed even when exceptions occur
    }

private:
    int* data;
};

int main() {
    try {
        ResourceHandler handler(-10);  // Triggers exception
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}
