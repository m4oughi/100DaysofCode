#include <iostream>

class ResourceBase {
public:
    virtual ~ResourceBase() {
        std::cout << "Base resource released." << std::endl;
    }
    virtual void use() = 0;
};

class FileResource : public ResourceBase {
    std::ofstream file;

public:
    FileResource(const std::string& filename) {
        file.open(filename);
        if (!file.is_open()) {
            throw std::runtime_error("Failed to open file.");
        }
        std::cout << "File resource acquired." << std::endl;
    }

    ~FileResource() override {
        if (file.is_open()) {
            file.close();
            std::cout << "File resource released." << std::endl;
        }
    }

    void use() override {
        std::cout << "Using file resource." << std::endl;
    }
};

class NetworkResource : public ResourceBase {
    bool connected;

public:
    NetworkResource() {
        connected = true;
        std::cout << "Network resource acquired." << std::endl;
    }

    ~NetworkResource() override {
        if (connected) {
            std::cout << "Network resource released." << std::endl;
        }
    }

    void use() override {
        std::cout << "Using network resource." << std::endl;
    }
};

int main() {
    {
        std::unique_ptr<ResourceBase> fileResource = std::make_unique<FileResource>("file.txt");
        std::unique_ptr<ResourceBase> networkResource = std::make_unique<NetworkResource>();

        fileResource->use();
        networkResource->use();
    }  // Both resources are automatically released in the correct order.
}
