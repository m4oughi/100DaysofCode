#include <iostream>

struct Rectangle {
private:
    int width;
    int height;

public:
    Rectangle(int w, int h) : width(w), height(h) {}

    friend int calculateArea(const Rectangle& rect);
};

int calculateArea(const Rectangle& rect) {
    return rect.width * rect.height; // Accessing private members directly
}
