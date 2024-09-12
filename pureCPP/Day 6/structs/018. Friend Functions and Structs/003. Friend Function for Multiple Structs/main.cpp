#include <iostream>

struct Box;

struct Cube {
    int side;
    
    // Declare friend function that takes both Box and Cube
    friend int getTotalSize(Box b, Cube c);
};

struct Box {
private:
    int length;
    
    friend int getTotalSize(Box b, Cube c);
    
public:
    Box(int l) : length(l) {}
};

int getTotalSize(Box b, Cube c) {
    return b.length + c.side;
}

int main() {
    Box box(10);
    Cube cube = {5};
    std::cout << "Total size: " << getTotalSize(box, cube) << std::endl;
    return 0;
}
