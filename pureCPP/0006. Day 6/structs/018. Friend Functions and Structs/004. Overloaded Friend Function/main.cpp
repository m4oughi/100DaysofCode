#include <iostream>

struct Box {
private:
    int length;
    
    // Declare two overloaded friend functions
    friend int getLength(Box b);
    friend int getLength(Box b, int multiplier);
    
public:
    Box(int l) : length(l) {}
};

int getLength(Box b) {
    return b.length;
}

int getLength(Box b, int multiplier) {
    return b.length * multiplier;
}

int main() {
    Box box(10);
    std::cout << "Length: " << getLength(box) << std::endl;
    std::cout << "Length multiplied: " << getLength(box, 3) << std::endl;
    return 0;
}
