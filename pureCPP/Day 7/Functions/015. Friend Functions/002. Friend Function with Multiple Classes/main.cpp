#include <iostream>

class Rectangle;

class Square {
private:
    double side;

public:
    Square(double s) : side(s) {}

    // Friend function declaration
    friend double calculateArea(const Square& sq, const Rectangle& rect);
};

class Rectangle {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    // Friend function declaration
    friend double calculateArea(const Square& sq, const Rectangle& rect);
};

// Friend function definition
double calculateArea(const Square& sq, const Rectangle& rect) {
    return (sq.side * sq.side) + (rect.length * rect.width);
}

int main() {
    Square square(5);
    Rectangle rectangle(4, 7);
    std::cout << "Combined area: " << calculateArea(square, rectangle) << std::endl;

    return 0;
}
