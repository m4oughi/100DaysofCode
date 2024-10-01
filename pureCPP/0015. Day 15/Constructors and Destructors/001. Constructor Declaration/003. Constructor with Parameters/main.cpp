#include <iostream>

class Rectangle {
private:
    int width, height;
public:
    Rectangle(int w, int h) {
        width = w;
        height = h;
        std::cout << "Rectangle created with width = " << width << " and height = " << height << std::endl;
    }
};

int main() {
    Rectangle r1(10, 20);
    return 0;
}
