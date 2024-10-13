#include <iostream>
#include <memory>
using namespace std;

int main() {
    shared_ptr<int> ptr1 = make_shared<int>(20); // shared pointer
    cout << "Shared_ptr1 Value: " << *ptr1 << endl;

    shared_ptr<int> ptr2 = ptr1; // share ownership
    cout << "Shared_ptr2 Value: " << *ptr2 << endl;

    cout << "Reference count: " << ptr1.use_count() << endl; // check reference count

    // Memory will be deallocated when reference count becomes 0
    return 0;
}
