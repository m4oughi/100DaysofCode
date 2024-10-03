#include <iostream>
using namespace std;

class DynamicArray {
    int* data;
    int size;
public:
    DynamicArray(int s) : size(s) {
        data = new int[size];
        for (int i = 0; i < size; ++i) {
            data[i] = i;
        }
    }

    // Overloading the assignment operator with const correctness
    DynamicArray& operator=(const DynamicArray& other) {
        if (this != &other) {  // Prevent self-assignment
            delete[] data;
            size = other.size;
            data = new int[size];
            for (int i = 0; i < size; ++i) {
                data[i] = other.data[i];  // Ensure that 'other' is not modified
            }
        }
        return *this;
    }

    void display() const {
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    ~DynamicArray() {
        delete[] data;
    }
};

int main() {
    DynamicArray arr1(5);
    const DynamicArray arr2(5);  // arr2 is const

    arr1 = arr2;  // arr2 is not modified due to const correctness
    arr1.display();  // Output: 0 1 2 3 4

    return 0;
}
