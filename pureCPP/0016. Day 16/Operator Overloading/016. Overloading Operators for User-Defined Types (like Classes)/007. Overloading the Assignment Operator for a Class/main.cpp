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

    // Overloading the assignment operator
    DynamicArray& operator=(const DynamicArray& other) {
        if (this != &other) {  // Prevent self-assignment
            delete[] data;  // Release old memory
            size = other.size;
            data = new int[size];
            for (int i = 0; i < size; ++i) {
                data[i] = other.data[i];
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
    DynamicArray arr2(10);
    arr2 = arr1;  // Using overloaded assignment operator
    arr2.display();  // Output: 0 1 2 3 4
    return 0;
}
