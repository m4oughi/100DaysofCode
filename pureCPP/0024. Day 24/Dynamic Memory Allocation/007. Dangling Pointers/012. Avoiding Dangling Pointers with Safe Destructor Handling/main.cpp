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
        data = nullptr; // avoid dangling pointer by setting to nullptr
    }
};

int main() {
    MyClass obj;
    if (obj.data != nullptr) {
        cout << "Object's data is still valid: " << *obj.data << endl;
    }

    return 0;
}
