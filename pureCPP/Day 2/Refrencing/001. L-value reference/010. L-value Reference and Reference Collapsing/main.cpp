#include <iostream>

template<typename T>
void func(T&& arg) {
    int &ref = arg;  // If T is an L-value, arg is an L-value reference
    ref++;
}

int main () {
    int x = 10;
    func(x);  // Works because x is an L-value
    
    return 0;
}