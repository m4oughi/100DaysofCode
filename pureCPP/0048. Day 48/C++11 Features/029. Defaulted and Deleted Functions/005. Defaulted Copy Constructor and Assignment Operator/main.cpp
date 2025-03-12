#include <iostream>

class Copyable {
public:
    Copyable() = default;
    Copyable(const Copyable&) = default; // Default copy constructor
    Copyable& operator=(const Copyable&) = default; // Default copy assignment
};

int main() {
    Copyable obj1;
    Copyable obj2 = obj1; // Works fine
    return 0;
}
