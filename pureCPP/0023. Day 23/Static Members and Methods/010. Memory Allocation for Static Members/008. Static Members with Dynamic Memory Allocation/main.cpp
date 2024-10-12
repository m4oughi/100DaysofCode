#include <iostream>
using namespace std;

class DynamicArray {
private:
    static int* arr;
    static int size;

public:
    static void allocateArray(int newSize) {
        size = newSize;
        arr = new int[size];  // Dynamic memory allocation for static member
    }

    static void deallocateArray() {
        delete[] arr;  // Free dynamic memory
        arr = nullptr;
        size = 0;
    }

    static void fillArray(int value) {
        for (int i = 0; i < size; ++i) {
            arr[i] = value;
        }
    }

    static void printArray() {
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// Memory allocation for static member (pointer)
int* DynamicArray::arr = nullptr;
int DynamicArray::size = 0;

int main() {
    DynamicArray::allocateArray(5);
    DynamicArray::fillArray(10);
    DynamicArray::printArray();  // Output: 10 10 10 10 10

    DynamicArray::deallocateArray();
    return 0;
}
