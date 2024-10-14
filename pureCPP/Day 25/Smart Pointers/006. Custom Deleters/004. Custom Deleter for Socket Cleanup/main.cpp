#include <iostream>
#include <memory>

void socketDeleter(int* socket) {
    std::cout << "Custom deleter for socket called. Closing socket..." << std::endl;
    if (socket) {
        // Hypothetical socket close function
        // closeSocket(*socket);
        std::cout << "Socket closed: " << *socket << std::endl;
    }
    delete socket;
}

int main() {
    std::shared_ptr<int> socketPtr(new int(42), socketDeleter);  // Custom deleter for socket cleanup

    std::cout << "Using socket: " << *socketPtr << std::endl;

    // Socket will be closed using the custom deleter when socketPtr goes out of scope
    return 0;
}
