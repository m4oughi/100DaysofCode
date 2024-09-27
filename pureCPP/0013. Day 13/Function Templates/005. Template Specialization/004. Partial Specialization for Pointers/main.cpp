#include <iostream>
using namespace std;

template <typename T>
class Wrapper {
    T value;
public:
    Wrapper(T v) : value(v) {}
    void print() const {
        cout << "Value: " << value << endl;
    }
};

// Partial specialization for pointer types
template <typename T>
class Wrapper<T*> {
    T* value;
public:
    Wrapper(T* v) : value(v) {}
    void print() const {
        cout << "Pointer points to value: " << *value << endl;
    }
};

int main() {
    int x = 10;
    Wrapper<int> intWrapper(100);   // Generic version
    intWrapper.print();

    Wrapper<int*> pointerWrapper(&x);  // Specialized for pointers
    pointerWrapper.print();

    return 0;
}
