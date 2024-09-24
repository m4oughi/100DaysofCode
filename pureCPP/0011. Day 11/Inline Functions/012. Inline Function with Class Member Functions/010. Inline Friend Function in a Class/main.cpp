#include <iostream>

class Box {
private:
    int length;
public:
    Box(int l) : length(l) {}

    // Friend function declaration
    friend inline int getLength(const Box &b);
};

// Inline friend function definition
inline int getLength(const Box &b) {
    return b.length;
}

int main() {
    Box box(15);
    std::cout << "Box Length: " << getLength(box) << std::endl; // Output: Box Length: 15
    return 0;
}
