#include <iostream>

struct Inner {
    int& ref;  // Reference to an external integer
    
    Inner(int& r) : ref(r) {}
};

struct Outer {
    Inner innerRef;
    
    Outer(int& r) : innerRef(r) {}
};

int main() {
    int a = 42;
    Outer o(a);
    
    std::cout << "Referenced value: " << o.innerRef.ref << std::endl;
}
