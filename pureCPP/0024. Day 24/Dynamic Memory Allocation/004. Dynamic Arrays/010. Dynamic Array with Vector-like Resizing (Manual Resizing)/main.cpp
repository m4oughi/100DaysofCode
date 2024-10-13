#include <iostream>
using namespace std;

class DynamicArray {
    int* arr;
    int capacity;
    int size;

public:
    DynamicArray() : arr(new int[2]), capacity(2), size(0) {}

    void add(int value) {
        if (size == capacity) {
            // Double the capacity
            int* newArr = new int[capacity * 2];
            for (int i = 0; i < size; i++) {
                newArr[i] = arr[i];
            }
            delete[] arr;
            arr = newArr;
            capacity *= 2;
        }
        arr[size++] = value;
    }

    void print() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~DynamicArray() {
        delete[] arr; // deallocate memory
    }
};

int main() {
    DynamicArray dArr;

    for (int i = 0; i < 10; i++) {
        dArr.add(i * 10); // dynamically add values
    }

    dArr.print(); // output the dynamic array
    return 0;
}
