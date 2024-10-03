#include <iostream>
using namespace std;

template <typename T>
class RefCountedPointer {
    T* ptr;
    int* refCount;
public:
    RefCountedPointer(T* p = nullptr) : ptr(p), refCount(new int(1)) {}

    // Copy constructor for shared ownership
    RefCountedPointer(const RefCountedPointer<T>& sp) : ptr(sp.ptr), refCount(sp.refCount) {
        ++(*refCount);
    }

    // Overload the arrow operator
    T* operator->() {
        return ptr;
    }

    ~RefCountedPointer() {
        --(*refCount);
        if (*refCount == 0) {
            delete ptr;
            delete refCount;
        }
    }
};

class Test {
public:
    void show() {
        cout << "Reference-counted smart pointer Test class method." << endl;
    }
};

int main() {
    RefCountedPointer<Test> sp1(new Test);
    RefCountedPointer<Test> sp2(sp1);  // Shared ownership

    sp1->show();  // Output: Reference-counted smart pointer Test class method.
    sp2->show();  // Output: Reference-counted smart pointer Test class method.

    return 0;
}
