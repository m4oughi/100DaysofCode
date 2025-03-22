#include <iostream>
#include <array>

class LargeObject {
public:
    std::array<int, 10000> data; // Large array
    LargeObject() { std::cout << "LargeObject Constructor\n"; }
    ~LargeObject() { std::cout << "LargeObject Destructor\n"; }
};

LargeObject createLargeObject() {
    return LargeObject(); // No copies/moves even for large objects
}

int main() {
    LargeObject lo = createLargeObject();
    return 0;
}
