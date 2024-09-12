#include <iostream>

struct Box {
private:
    int length;
    
protected:
    int width;
    
public:
    Box(int l, int w) : length(l), width(w) {}
    
    friend int getArea(Box b);  // Friend function accessing both private and protected members
};

int getArea(Box b) {
    return b.length * b.width;
}

int main() {
    Box box(10, 5);
    std::cout << "Area: " << getArea(box) << std::endl;
    return 0;
}
