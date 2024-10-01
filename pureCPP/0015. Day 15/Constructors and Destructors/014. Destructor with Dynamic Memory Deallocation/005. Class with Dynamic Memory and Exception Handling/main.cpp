#include <iostream>
#include <stdexcept>

class Resource {
private:
    int* data;
public:
    Resource(int size) {
        data = new int[size];
        std::cout << "Resource of size " << size << " allocated." << std::endl;

        // Simulate an error condition
        if (size < 0) {
            throw std::invalid_argument("Size cannot be negative!");
        }
    }

    ~Resource() {
        delete[] data;
        std::cout << "Resource deallocated." << std::endl;
    }
};

int main() {
    try {
        Resource res(-1);  // Exception will be thrown here
    }
    catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}
