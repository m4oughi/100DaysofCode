#include <iostream>
using namespace std;

class MyClass {
public:
    int* data;

    MyClass() {
        data = new int(100); // dynamically allocate memory
    }

    ~MyClass() {
        delete data; // deallocate memory
        // After destruction, any pointer to `data` becomes dangling
    }
};

int main() {
    MyClass obj;
    int* ptr = obj.data; // pointer to object's data

    // Destructor of obj is called automatically at the end of the scope
    // ptr becomes a dangling pointer after obj is destroyed

    return 0;
}
