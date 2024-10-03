#include <iostream>
using namespace std;

template <typename T>
class SmartPointer {
    T* ptr;
    int* refCount;
public:
    SmartPointer(T* p = nullptr) : ptr(p), refCount(new int(1)) {}

    // Copy constructor
    SmartPointer(const SmartPointer<T>& sp) {
        ptr = sp.ptr;
        refCount = sp.refCount;
        ++(*refCount);
    }

    // Overload dereference operator
    T& operator*() {
        return *ptr;
    }

    // Destructor to manage reference counting
    ~SmartPointer() {
        --(*refCount);
        if (*refCount == 0) {
            delete ptr;
            delete refCount;
        }
    }
};

int main() {
    SmartPointer<int> sp1(new int(42));
    SmartPointer<int> sp2(sp1);  // Shared ownership

    cout << *sp1 << endl;  // Output: 42
    cout << *sp2 << endl;  // Output: 42

    *sp2 = 100;
    cout << *sp1 << endl;  // Output: 100

    return 0;
}
