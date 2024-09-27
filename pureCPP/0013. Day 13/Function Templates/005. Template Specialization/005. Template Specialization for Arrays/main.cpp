#include <iostream>
using namespace std;

template <typename T, int size>
class Array {
    T data[size];
public:
    Array() {
        for (int i = 0; i < size; ++i)
            data[i] = T();  // Default-initialize elements
    }
    void print() const {
        for (int i = 0; i < size; ++i)
            cout << data[i] << " ";
        cout << endl;
    }
};

// Specialization for arrays of size 1
template <typename T>
class Array<T, 1> {
    T data[1];
public:
    Array() {
        data[0] = T();
    }
    void print() const {
        cout << "Array has one element: " << data[0] << endl;
    }
};

int main() {
    Array<int, 5> intArray;  // Generic version
    intArray.print();

    Array<int, 1> singleElementArray;  // Specialized version for size 1
    singleElementArray.print();

    return 0;
}
