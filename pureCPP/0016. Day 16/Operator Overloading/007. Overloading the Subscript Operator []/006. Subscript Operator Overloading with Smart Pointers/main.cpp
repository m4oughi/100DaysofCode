#include <iostream>
using namespace std;

class SmartArray {
    int* data;
    int size;
public:
    SmartArray(int s) : size(s) {
        data = new int[size];
        for (int i = 0; i < size; ++i)
            data[i] = i + 1;
    }

    int& operator[](int index) {
        return data[index];  // Return the element at index
    }

    int operator[](int index) const {
        return data[index];  // Const version for access
    }

    void display() const {
        for (int i = 0; i < size; ++i)
            cout << data[i] << " ";
        cout << endl;
    }

    ~SmartArray() {
        delete[] data;  // Free allocated memory
    }
};

int main() {
    SmartArray arr(5);
    arr[2] = 50;  // Modify element using subscript operator
    cout << arr[2] << endl;  // Output: 50
    return 0;
}
