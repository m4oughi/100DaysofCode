#include <iostream>
#include <exception>
#include <string>

class NetworkException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Network connection failed!";
    }
};

void connectToServer() {
    throw NetworkException();
}

void performOperation() {
    try {
        connectToServer();
    } catch (const NetworkException& e) {
        std::cout << "Caught in performOperation: " << e.what() << std::endl;
        throw;  // Rethrow to be caught in main
    }
}

int main() {
    try {
        performOperation();
    } catch (const NetworkException& e) {
        std::cout << "Caught in main: " << e.what() << std::endl;
    }
    return 0;
}
