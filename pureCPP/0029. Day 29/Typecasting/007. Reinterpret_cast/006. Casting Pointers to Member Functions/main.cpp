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
    void (MyClass::*funcPtr)() = &MyClass::display;

    // Reinterpret member function pointer to a void pointer
    void* voidFuncPtr = reinterpret_cast<void*>(funcPtr);

    // Reinterpret back to member function pointer (unsafe)
    void (MyClass::*newFuncPtr)() = reinterpret_cast<void (MyClass::*)()>(voidFuncPtr);

    (obj.*newFuncPtr)();  // Call the function via reinterpreted pointer
    return 0;
}
