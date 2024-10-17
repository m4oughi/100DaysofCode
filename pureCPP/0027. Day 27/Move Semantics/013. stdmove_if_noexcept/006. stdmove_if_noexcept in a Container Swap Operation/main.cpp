#include <iostream>
#include <vector>
#include <utility>

class MyClass {
public:
    MyClass() { std::cout << "Default constructor\n"; }
    
    // Move constructor may throw
    MyClass(MyClass&&) { std::cout << "Move constructor (may throw)\n"; }
    
    // Copy constructor
    MyClass(const MyClass&) { std::cout << "Copy constructor\n"; }
};

template <typename T>
void safe_swap(T& a, T& b) {
    using std::swap;
    swap(std::move_if_noexcept(a), std::move_if_noexcept(b));
}

int main() {
    std::vector<MyClass> v1(3), v2(3);
    
    std::cout << "Before safe_swap:\n";
    
    safe_swap(v1, v2);  // Uses std::move_if_noexcept to swap vectors
    
    std::cout << "After safe_swap:\n";
}
