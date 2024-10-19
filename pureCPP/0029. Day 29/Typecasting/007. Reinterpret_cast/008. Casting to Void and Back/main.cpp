#include <iostream>
using namespace std;

class MyClass {
public:
    void display() {
        cout << "MyClass display function." << endl;
    }
};

int main() {
    MyClass obj;

    // Cast the object pointer to void*
    void* voidPtr = reinterpret_cast<void*>(&obj);

    // Cast it back to the original pointer type
    MyClass* objPtr = reinterpret_cast<MyClass*>(voidPtr);

    objPtr->display();  // Call the function after casting back
    return 0;
}
