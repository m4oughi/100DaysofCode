#include <iostream>

class Rectangle {
    int width, height;
public:
    Rectangle() : Rectangle(10, 5) {} // Default to 10x5 if no values given

    Rectangle(int w) : Rectangle(w, w) {} // Delegates to square

    Rectangle(int w, int h) : width(w), height(h) {} // Main constructor

    void display() const {
        std::cout << "Width: " << width << ", Height: " << height << std::endl;
    }
};

int main() {
    Rectangle r1;      // Default size
    Rectangle r2(15);  // Square
    Rectangle r3(20, 30); // Custom dimensions

    r1.display();
    r2.display();
    r3.display();

    return 0;
}
