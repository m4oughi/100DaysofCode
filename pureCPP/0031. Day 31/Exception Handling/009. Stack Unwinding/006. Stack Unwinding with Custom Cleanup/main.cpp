#include <iostream>

class CleanupClass {
public:
    CleanupClass() : data(new int[10]) { std::cout << "Resource allocated" << std::endl; }
    ~CleanupClass() { 
        delete[] data; 
        std::cout << "Resource deallocated (unwinding)" << std::endl; 
    }
private:
    int* data;
};

void doWork() {
    CleanupClass resource;
    throw std::runtime_error("Error during work");
}

int main() {
    try {
        doWork();
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}
