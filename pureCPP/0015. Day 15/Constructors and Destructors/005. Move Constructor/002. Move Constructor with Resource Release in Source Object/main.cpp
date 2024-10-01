#include <iostream>

class Buffer {
private:
    int* buffer;
    int length;
public:
    // Parameterized constructor
    Buffer(int len) : length(len) {
        buffer = new int[length];
        std::cout << "Buffer of length " << length << " created." << std::endl;
    }

    // Move constructor
    Buffer(Buffer&& other) noexcept : buffer(other.buffer), length(other.length) {
        other.buffer = nullptr;
        other.length = 0;
        std::cout << "Buffer moved." << std::endl;
    }

    // Destructor
    ~Buffer() {
        delete[] buffer;
        std::cout << "Buffer memory deallocated." << std::endl;
    }
};

int main() {
    Buffer buf1(10);
    Buffer buf2 = std::move(buf1);  // Move constructor is called
    return 0;
}
