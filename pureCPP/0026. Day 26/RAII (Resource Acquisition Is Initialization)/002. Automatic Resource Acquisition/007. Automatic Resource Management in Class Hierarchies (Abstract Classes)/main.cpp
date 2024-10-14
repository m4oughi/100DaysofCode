#include <iostream>

class ResourceBase {
public:
    virtual ~ResourceBase() = default;
    virtual void acquire() = 0;
    virtual void release() = 0;
};

class FileResource : public ResourceBase {
    std::ofstream file;

public:
    void acquire() override {
        file.open("example.txt");
        if (file.is_open()) {
            std::cout << "File opened automatically." << std::endl;
        }
    }

    void release() override {
        if (file.is_open()) {
            file.close();
            std::cout << "File closed automatically." << std::endl;
        }
    }

    ~FileResource() {
        release();
    }
};

class MemoryResource : public ResourceBase {
    int* memory;

public:
    void acquire() override {
        memory = new int[10];
        std::cout << "Memory allocated automatically." << std::endl;
    }

    void release() override {
        delete[] memory;
        std::cout << "Memory deallocated automatically." << std::endl;
    }

    ~MemoryResource() {
        release();
    }
};

int main() {
    {
        FileResource file;
        MemoryResource memory;

        file.acquire();
        memory.acquire();
    }  // File and memory resources are automatically released when they go out of scope.
}
