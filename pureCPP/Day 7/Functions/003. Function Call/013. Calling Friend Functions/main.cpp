#include <iostream>

class Box {
private:
    int width;

public:
    Box() : width(0) {}
    void setWidth(int w) { width = w; }
    friend void showWidth(Box box);  // Friend function declaration
};

// Friend function definition
void showWidth(Box box) {
    std::cout << "Width: " << box.width << std::endl;  // Friend function call
}

int main() {
    Box box;
    box.setWidth(10);
    showWidth(box);  // Call to friend function
    return 0;
}
