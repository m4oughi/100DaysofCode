#include <iostream>
using namespace std;

class MyClass {
public:
    int* ptr;

    MyClass() {
        ptr = new int(10); // dynamically allocate memory
    }

    // No destructor, causing a memory leak when object is destroyed
};

int main() {
    MyClass obj; // object created, but memory allocated by ptr is never deallocated
    return 0;
}
