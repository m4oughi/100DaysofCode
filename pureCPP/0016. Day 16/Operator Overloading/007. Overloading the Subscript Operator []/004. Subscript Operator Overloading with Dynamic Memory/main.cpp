#include <iostream>
using namespace std;

class Array {
    int* data;
    int size;
public:
    Array(int s) : size(s) {
        data = new int[size];
        for (int i = 0; i < size; ++i)
            data[i] = i + 1;
    }

    int& operator[](int index) {
        return data[index];  // Return the element at index
    }

    void display() const {
        for (int i = 0; i < size; ++i)
            cout << data[i] << " ";
        cout << endl;
    }

    ~Array() {
        delete[] data;  // Free allocated memory
    }
};

int main() {
    Array arr(5);
    arr[3] = 20;  // Modify element using subscript operator
    arr.display();  // Output: 1 2 3 20 5
    return 0;
}
