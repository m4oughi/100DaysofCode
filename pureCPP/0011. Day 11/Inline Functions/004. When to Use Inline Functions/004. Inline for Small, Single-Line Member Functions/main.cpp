#include <iostream>

class Rectangle {
public:
    // Inline getter function for the area
    inline int getArea() const {
        return length * breadth;
    }

    void setDimensions(int l, int b) {
        length = l;
        breadth = b;
    }

private:
    int length;
    int breadth;
};

int main() {
    Rectangle rect;
    rect.setDimensions(4, 5);
    std::cout << "Area of Rectangle: " << rect.getArea() << std::endl; // Output: Area of Rectangle: 20
    return 0;
}
