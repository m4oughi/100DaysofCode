#include <iostream>

template <typename T>
struct Inner {
    T value;
    
    Inner(T v) : value(v) {}
    
    void print() const {
        std::cout << "Value: " << value << std::endl;
    }
};

template <typename T>
struct Outer {
    Inner<T> inner;
    
    Outer(T v) : inner(v) {}
    
    void print() const {
        inner.print();
    }
};

int main() {
    Outer<int> o(42);
    o.print();
    
    Outer<double> o2(3.14);
    o2.print();
}
