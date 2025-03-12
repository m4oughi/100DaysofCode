#include <iostream>

class Movable {
public:
    Movable() = default;
    Movable(Movable&&) = default; // Default move constructor
    Movable& operator=(Movable&&) = default; // Default move assignment
};

int main() {
    Movable obj1;
    Movable obj2 = std::move(obj1); // Uses move constructor
    return 0;
}
