#include <iostream>
#include <vector>
using namespace std;

class DataBuffer {
private:
    static vector<int> buffer;  // Static member with complex data type (vector)

public:
    static void addToBuffer(int data) {
        buffer.push_back(data);
    }

    static void showBuffer() {
        cout << "Buffer contents: ";
        for (int i : buffer) {
            cout << i << " ";
        }
        cout << endl;
    }
};

// Allocate memory for static member
vector<int> DataBuffer::buffer;

int main() {
    DataBuffer::addToBuffer(10);
    DataBuffer::addToBuffer(20);
    DataBuffer::addToBuffer(30);

    DataBuffer::showBuffer();  // Output: Buffer contents: 10 20 30
    return 0;
}
