#include <iostream>
using namespace std;

class MyClass {
public:
    int* ptr;

    MyClass() {
        ptr = new int(10); // dynamically allocate memory
    }

    ~MyClass() {
        delete ptr; // deallocate memory when object is destroyed
    }
};

int main() {
    MyClass obj; // memory is properly deallocated when obj goes out of scope
    return 0;
}
