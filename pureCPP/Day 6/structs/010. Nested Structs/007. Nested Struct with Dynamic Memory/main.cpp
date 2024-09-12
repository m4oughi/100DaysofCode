#include <iostream>

struct Inner {
    int* data;
    
    Inner(int size) {
        data = new int[size]; // Dynamic allocation
        for (int i = 0; i < size; ++i) {
            data[i] = i;
        }
    }
    
    ~Inner() {
        delete[] data; // Clean up
    }
};

struct Outer {
    Inner buffer;
    
    Outer(int size) : buffer(size) {}
};

int main() {
    Outer o(5);
    
    for (int i = 0; i < 5; ++i) {
        std::cout << o.buffer.data[i] << " ";
    }
    std::cout << std::endl;
}
