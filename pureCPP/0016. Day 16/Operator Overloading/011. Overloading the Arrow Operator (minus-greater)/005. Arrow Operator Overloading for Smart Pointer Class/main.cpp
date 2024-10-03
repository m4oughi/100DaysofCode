#include <iostream>
using namespace std;

template <typename T>
class SmartPointer {
    T* ptr;
public:
    SmartPointer(T* p = nullptr) : ptr(p) {}

    // Overload the arrow operator
    T* operator->() {
        return ptr;
    }

    ~SmartPointer() {
        delete ptr;
    }
};

class Test {
public:
    void show() {
        cout << "SmartPointer Test class method." << endl;
    }
};

int main() {
    SmartPointer<Test> sp(new Test);
    sp->show();  // Output: SmartPointer Test class method.
    return 0;
}
