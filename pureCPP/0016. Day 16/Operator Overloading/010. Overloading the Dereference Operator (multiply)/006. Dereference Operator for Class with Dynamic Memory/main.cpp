#include <iostream>
using namespace std;

class DynamicArray {
    int* data;
    int size;
public:
    DynamicArray(int s) : size(s) {
        data = new int[size];
        for (int i = 0; i < size; ++i)
            data[i] = i + 1;
    }

    // Overload dereference operator
    int* operator*() {
        return data;
    }

    ~DynamicArray() {
        delete[] data;
    }
};

int main() {
    DynamicArray arr(5);

    int* p = *arr;  // Dereference to get pointer to internal array
    for (int i = 0; i < 5; ++i)
        cout << p[i] << " ";  // Output: 1 2 3 4 5
    cout << endl;

    return 0;
}
