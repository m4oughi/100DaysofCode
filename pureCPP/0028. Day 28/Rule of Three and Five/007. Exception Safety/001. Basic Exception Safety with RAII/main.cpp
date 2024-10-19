#include <iostream>
#include <stdexcept>

class ResourceRAII {
    int* data;
public:
    ResourceRAII(int value) {
        data = new int(value);
        std::cout << "Resource allocated!" << std::endl;
    }

    ~ResourceRAII() {
        delete data;
        std::cout << "Resource deallocated!" << std::endl;
    }

    void riskyOperation() {
        std::cout << "Performing risky operation!" << std::endl;
        throw std::runtime_error("Error occurred in riskyOperation!");
    }

    void display() const {
        std::cout << "Data: " << *data << std::endl;
    }
};

int main() {
    try {
        ResourceRAII obj(42);
        obj.display();
        obj.riskyOperation();  // Exception will be thrown here
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }  // Destructor automatically cleans up the resource even after an exception
    return 0;
}
