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
    std::cout << "Width: " << box.width << std::endl;  // Can access private members
}

int main() {
    Box box;
    box.setWidth(10);
    showWidth(box);  // Calling friend function
    return 0;
}
