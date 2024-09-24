#include <iostream>

class Buffer {
public:
    static const int BUFFER_SIZE = 100; // Constant buffer size

    Buffer() {
        data = new int[BUFFER_SIZE];
    }

    ~Buffer() {
        delete[] data;
    }

    void fillBuffer() {
        for (int i = 0; i < BUFFER_SIZE; ++i) {
            data[i] = i;
        }
    }

    void printBuffer() const {
        for (int i = 0; i < BUFFER_SIZE; ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }

private:
    int* data;
};

int main() {
    Buffer buffer;
    buffer.fillBuffer();
    buffer.printBuffer(); // Prints numbers from 0 to 99
}
