#include <iostream>
using namespace std;

template <typename T, int size>
class FixedArray {
    T data[size];
public:
    void set(int index, T value) {
        if (index < size)
            data[index] = value;
    }
    void print() const {
        for (int i = 0; i < size; ++i)
            cout << data[i] << " ";
        cout << endl;
    }
};

// Specialization for size 0
template <typename T>
class FixedArray<T, 0> {
public:
    void set(int, T) {
        cout << "Array size is zero. Cannot set values." << endl;
    }
    void print() const {
        cout << "Array is empty." << endl;
    }
};

int main() {
    FixedArray<int, 5> array1;
    array1.set(0, 10);
    array1.set(1, 20);
    array1.print();  // Generic version

    FixedArray<int, 0> array2;
    array2.set(0, 100);  // Specialized version for size 0
    array2.print();

    return 0;
}
