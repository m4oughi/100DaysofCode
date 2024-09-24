#include <iostream>

class Rectangle {
public:
    // Inline member function to get the area
    inline int getArea() const {
        return length * breadth;
    }

    void setDimensions(int len, int brd) {
        length = len;
        breadth = brd;
    }

private:
    int length;
    int breadth;
};

int main() {
    Rectangle rect;
    rect.setDimensions(5, 6);
    std::cout << "Area of Rectangle: " << rect.getArea() << std::endl; // Output: Area of Rectangle: 30
    return 0;
}
