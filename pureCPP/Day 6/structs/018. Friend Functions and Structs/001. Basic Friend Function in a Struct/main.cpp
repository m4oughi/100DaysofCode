#include <iostream>

struct Box {
    int length;
    
    // Declare friend function
    friend int getLength(Box b);
};

// Define friend function
int getLength(Box b) {
    return b.length;
}

int main() {
    Box box;
    box.length = 10;
    std::cout << "Length: " << getLength(box) << std::endl;
    return 0;
}
