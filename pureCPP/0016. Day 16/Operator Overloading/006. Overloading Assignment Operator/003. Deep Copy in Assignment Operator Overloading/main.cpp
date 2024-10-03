#include <iostream>
using namespace std;

class Array {
    int* data;
    int size;
public:
    Array(int s) : size(s) {
        data = new int[size];
        for (int i = 0; i < size; ++i) {
            data[i] = i + 1;
        }
    }

    Array& operator=(const Array& other) {
        if (this == &other) return *this;  // Self-assignment check

        delete[] data;  // Free existing memory
        size = other.size;
        data = new int[size];  // Allocate new memory
        for (int i = 0; i < size; ++i) {
            data[i] = other.data[i];  // Copy elements
        }
        return *this;
    }

    void display() const {
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    ~Array() {
        delete[] data;
    }
};

int main() {
    Array arr1(5);
    Array arr2(3);
    arr2 = arr1;  // Deep copy through assignment
    arr2.display();  // Output: 1 2 3 4 5
    return 0;
}
