#include <iostream>

class Box {
private:
    double width;

public:
    Box(double w) : width(w) {}

    // Friend function declaration
    friend void printWidth(const Box& b);
};

// Friend function definition
void printWidth(const Box& b) {
    std::cout << "Width of box: " << b.width << std::endl;
}

int main() {
    Box box(10.5);
    printWidth(box);  // Calls the friend function

    return 0;
}
