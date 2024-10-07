#include <iostream>
using namespace std;

// Abstract class with a pure virtual function
class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Circle circle;
    circle.draw();  // Calls Circle's draw method
    return 0;
}
