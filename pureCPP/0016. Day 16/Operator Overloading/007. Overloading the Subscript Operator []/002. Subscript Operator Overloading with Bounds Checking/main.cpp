#include <iostream>
#include <stdexcept>
using namespace std;

class Array {
    int data[5];
public:
    Array() {
        for (int i = 0; i < 5; ++i)
            data[i] = i + 1;
    }

    int& operator[](int index) {
        if (index < 0 || index >= 5) {
            throw out_of_range("Index out of range");
        }
        return data[index];  // Return the array element at index
    }

    void display() const {
        for (int i = 0; i < 5; ++i)
            cout << data[i] << " ";
        cout << endl;
    }
};

int main() {
    Array arr;
    try {
        arr[5] = 10;  // Attempt to access out-of-bounds index
    } catch (const out_of_range& e) {
        cout << e.what() << endl;  // Output: Index out of range
    }
    return 0;
}
