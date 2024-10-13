#include <iostream>
using namespace std;

class MyClass {
public:
    int* data;

    MyClass() {
        data = new int(100); // dynamically allocate memory
    }

    ~MyClass() {
        delete data; // destructor deletes memory
    }
};

int main() {
    MyClass obj;

    delete obj.data; // first deletion by user
    // obj's destructor will attempt a second deletion (Error: undefined behavior)

    return 0;
}
