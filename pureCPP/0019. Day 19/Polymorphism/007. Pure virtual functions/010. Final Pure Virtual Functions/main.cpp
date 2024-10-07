#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() final override {  // Final method prevents further overriding
        cout << "Drawing Circle" << endl;
    }
};

// Uncommenting the following code will cause a compilation error
// class SpecialCircle : public Circle {
//     void draw() override { }
// };

int main() {
    Circle circle;
    circle.draw();  // Calls Circle's final draw method

    return 0;
}
