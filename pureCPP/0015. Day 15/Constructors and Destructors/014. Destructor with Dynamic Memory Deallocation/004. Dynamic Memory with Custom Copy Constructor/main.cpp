#include <iostream>

class DynamicBuffer {
private:
    int* buffer;
    int size;
public:
    DynamicBuffer(int s) : size(s) {
        buffer = new int[size];
        std::cout << "Buffer of size " << size << " allocated." << std::endl;
    }

    // Copy constructor for deep copying
    DynamicBuffer(const DynamicBuffer& other) : size(other.size) {
        buffer = new int[size];
        for (int i = 0; i < size; i++) {
            buffer[i] = other.buffer[i];
        }
        std::cout << "Buffer copied." << std::endl;
    }

    ~DynamicBuffer() {
        delete[] buffer;  // Deallocating dynamic memory
        std::cout << "Buffer deallocated." << std::endl;
    }
};

int main() {
    DynamicBuffer buf1(10);
    DynamicBuffer buf2 = buf1;  // Calls copy constructor
    return 0;
}
