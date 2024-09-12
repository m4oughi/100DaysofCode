#include <iostream>

struct Inner {
    int* data;
    
    Inner(int size) {
        data = new int[size];
        for (int i = 0; i < size; ++i) {
            data[i] = i;
        }
    }
    
    Inner(const Inner& other) {
        data = new int[5]; // Assume fixed size for simplicity
        for (int i = 0; i < 5; ++i) {
            data[i] = other.data[i];
        }
    }
    
    ~Inner() {
        delete[] data;
    }
};

struct Outer {
    Inner buffer;
    
    Outer(int size) : buffer(size) {}
};

int main() {
    Outer o1(5);
    Outer o2 = o1; // Copy constructor
    
    for (int i = 0; i < 5; ++i) {
        std::cout << o2.buffer.data[i] << " ";
    }
    std::cout << std::endl;
}
