#include <iostream>

class MemoryBuffer {
    char* buffer;
    size_t size;
public:
    MemoryBuffer(size_t size) : size(size) {
        buffer = new char[size];
        std::cout << "Memory buffer of size " << size << " allocated." << std::endl;
    }

    ~MemoryBuffer() {
        delete[] buffer;
        std::cout << "Memory buffer deallocated." << std::endl;
    }

    void writeToBuffer(const std::string& data) {
        if (data.size() <= size) {
            std::copy(data.begin(), data.end(), buffer);
            std::cout << "Data written to buffer: " << data << std::endl;
        } else {
            std::cerr << "Data size exceeds buffer capacity." << std::endl;
        }
    }
};

int main() {
    {
        MemoryBuffer buffer(20);
        buffer.writeToBuffer("RAII Example");
    }
    // Memory buffer will be deallocated when buffer goes out of scope
    return 0;
}
