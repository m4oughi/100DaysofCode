#include <iostream>

struct Box {
private:
    int length;
    
    // Declare friend function
    friend int getLength(Box b);
    
public:
    Box(int l) : length(l) {}
};

// Define friend function
int getLength(Box b) {
    return b.length;
}

int main() {
    Box box(10);
    std::cout << "Length: " << getLength(box) << std::endl;
    return 0;
}
