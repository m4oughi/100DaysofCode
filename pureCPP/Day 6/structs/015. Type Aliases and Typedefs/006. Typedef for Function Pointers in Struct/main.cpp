#include <iostream>

struct FunctionPointer {
    typedef void (*FuncPtr)(int);  // Typedef for a function pointer
    
    void callFunction(FuncPtr f, int x) {
        f(x);
    }
};

void myFunction(int x) {
    std::cout << "Called with value: " << x << std::endl;
}

int main() {
    FunctionPointer obj;
    obj.callFunction(myFunction, 25);
}
