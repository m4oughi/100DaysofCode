#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function
};

class Circle final : public Shape {  // Prevents further inheritance
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

// Uncommenting the following code will cause a compilation error
// class SpecialCircle : public Circle {};

int main() {
    Circle circle;
    circle.draw();  // Calls Circle's draw method

    return 0;
}
