#include <iostream>
using namespace std;

template <typename T>
class SmartPointer {
    T* ptr;
public:
    SmartPointer(T* p = nullptr) : ptr(p) {}

    // Overload prefix increment (pointer arithmetic)
    SmartPointer& operator++() {
        ++ptr;
        return *this;
    }

    // Overload postfix increment (pointer arithmetic)
    SmartPointer operator++(int) {
        SmartPointer temp = *this;
        ++ptr;
        return temp;
    }

    // Overload prefix decrement (pointer arithmetic)
    SmartPointer& operator--() {
        --ptr;
        return *this;
    }

    // Overload postfix decrement (pointer arithmetic)
    SmartPointer operator--(int) {
        SmartPointer temp = *this;
        --ptr;
        return temp;
    }

    T& operator*() const {
        return *ptr;
    }
};

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    SmartPointer<int> sp(arr);

    cout << *sp << endl;  // Output: 1

    ++sp;
    cout << *sp << endl;  // Output: 2

    sp++;
    cout << *sp << endl;  // Output: 3

    --sp;
    cout << *sp << endl;  // Output: 2

    sp--;
    cout << *sp << endl;  // Output: 1

    return 0;
}
