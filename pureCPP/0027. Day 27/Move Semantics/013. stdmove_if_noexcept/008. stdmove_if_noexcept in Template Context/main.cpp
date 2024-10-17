#include <iostream>
#include <utility>

template <typename T>
void safe_relocate(T& obj1, T& obj2) {
    T tmp = std::move_if_noexcept(obj1);  // Tries to move obj1 to temporary
    obj1 = std::move_if_noexcept(obj2);   // Tries to move obj2 into obj1
    obj2 = std::move_if_noexcept(tmp);    // Moves the temporary back into obj2
}

class MyClass {
public:
    MyClass() { std::cout << "Default constructor\n"; }
    
    MyClass(MyClass&&) { std::cout << "Move constructor (may throw)\n"; }
    
    MyClass(const MyClass&) noexcept { std::cout << "Copy constructor (noexcept)\n"; }
};

int main() {
    MyClass obj1, obj2;
    safe_relocate(obj1, obj2);  // Relocating objects using std::move_if_noexcept
}
