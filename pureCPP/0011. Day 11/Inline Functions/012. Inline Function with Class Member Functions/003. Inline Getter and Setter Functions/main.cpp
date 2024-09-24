#include <iostream>

class Rectangle {
private:
    int width, height;
public:
    // Inline setter functions
    void setWidth(int w) { width = w; }
    void setHeight(int h) { height = h; }
    
    // Inline getter functions
    int getWidth() const { return width; }
    int getHeight() const { return height; }
};

int main() {
    Rectangle rect;
    rect.setWidth(10);
    rect.setHeight(5);
    std::cout << "Width: " << rect.getWidth() << std::endl;  // Output: Width: 10
    std::cout << "Height: " << rect.getHeight() << std::endl; // Output: Height: 5
    return 0;
}
