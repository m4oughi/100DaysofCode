#include <iostream>

class Resource {
public:
    Resource() { std::cout << "Resource acquired" << std::endl; }
    ~Resource() { std::cout << "Resource released (unwinding)" << std::endl; }
};

void doWork() {
    Resource res;
    throw std::runtime_error("Error during work");
}

void handleError() {
    try {
        doWork();
    } catch (...) {
        std::cout << "Caught in handleError, rethrowing..." << std::endl;
        throw;  // Rethrow the exception
    }
}

int main() {
    try {
        handleError();
    } catch (const std::exception& e) {
        std::cout << "Caught rethrown exception: " << e.what() << std::endl;
    }
    return 0;
}
