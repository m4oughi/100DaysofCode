#include <iostream>

class File {
public:
    File() {
        std::cout << "File opened." << std::endl;
    }

    ~File() {
        std::cout << "File closed." << std::endl;
    }
};

class NetworkConnection {
public:
    NetworkConnection() {
        std::cout << "Network connection established." << std::endl;
    }

    ~NetworkConnection() {
        std::cout << "Network connection closed." << std::endl;
    }
};

class ResourceManager {
    File file;
    NetworkConnection connection;

public:
    ResourceManager() {
        std::cout << "Resource manager initialized." << std::endl;
    }

    ~ResourceManager() {
        std::cout << "Resource manager cleaned up." << std::endl;
    }
};

int main() {
    {
        ResourceManager manager;
        // Both file and connection are released when `manager` goes out of scope.
    }
    std::cout << "All resources have been released deterministically." << std::endl;
}
