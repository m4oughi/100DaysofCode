#include <iostream>

class Rectangle {
public:
    int width, height;

    void resize(int &newWidth, int &newHeight) {
        width = newWidth;
        height = newHeight;
    }
};

int main() {
    Rectangle rect;
    int w = 15, h = 30;
    rect.resize(w, h);  // Pass by reference
    std::cout << "Width: " << rect.width << ", Height: " << rect.height << std::endl;


    return 0;
}