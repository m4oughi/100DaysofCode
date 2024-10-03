#include <iostream>
using namespace std;

template <typename T>
class SmartPointer {
    T* ptr;
public:
    SmartPointer(T* p = nullptr) : ptr(p) {}
    
    // Overload dereference operator
    T& operator*() {
        return *ptr;
    }

    // Destructor to handle memory deallocation
    ~SmartPointer() {
        delete ptr;
    }
};

int main() {
    SmartPointer<int> sp(new int(100));

    cout << *sp << endl;  // Output: 100
    *sp = 200;
    cout << *sp << endl;  // Output: 200

    return 0;
}
