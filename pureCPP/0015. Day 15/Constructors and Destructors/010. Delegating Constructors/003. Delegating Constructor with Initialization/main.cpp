#include <iostream>

class Rectangle {
private:
    int length;
    int width;
public:
    // Delegating constructor initializing members
    Rectangle() : Rectangle(0, 0) {
        std::cout << "Default constructor initializing members." << std::endl;
    }

    // Delegating constructor with one parameter
    Rectangle(int l) : Rectangle(l, l) {
        std::cout << "Square constructor called, length and width: " << l << "." << std::endl;
    }

    // Primary constructor
    Rectangle(int l, int w) : length(l), width(w) {
        std::cout << "Parameterized constructor called with length = " << length << ", width = " << width << "." << std::endl;
    }
    
    void display() const {
        std::cout << "Rectangle: " << length << "x" << width << std::endl;
    }
};

int main() {
    Rectangle r1;        // Calls delegating constructor (0, 0)
    r1.display();

    Rectangle r2(5);     // Calls square constructor (5, 5)
    r2.display();

    Rectangle r3(5, 10); // Calls primary constructor (5, 10)
    r3.display();

    return 0;
}
