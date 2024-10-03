#include <iostream>
using namespace std;

class Buffer {
    int* data;
    int size;
public:
    Buffer(int s) : size(s) {
        data = new int[size];
        for (int i = 0; i < size; ++i)
            data[i] = i * 10;
    }

    // Conversion operator to convert Buffer to int*
    operator int*() {
        return data;
    }

    ~Buffer() {
        delete[] data;
    }
};

int main() {
    Buffer buffer(5);
    int* ptr = buffer;  // Implicit conversion from Buffer to int*
    cout << "Buffer contents: ";
    for (int i = 0; i < 5; ++i)
        cout << ptr[i] << " ";  // Output: 0 10 20 30 40
    cout << endl;
    return 0;
}
