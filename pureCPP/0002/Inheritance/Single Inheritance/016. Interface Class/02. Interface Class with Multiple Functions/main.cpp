#include <iostream>
using namespace std;

// Interface class with multiple pure virtual functions
class Drawable {
public:
    virtual void draw() const = 0; // Pure virtual function for drawing
    virtual void resize(int width, int height) = 0; // Pure virtual function for resizing
    virtual ~Drawable() {} // Virtual destructor
};

// Derived class implementing the interface
class Rectangle : public Drawable {
private:
    int width, height;
public:
    Rectangle(int w, int h) : width(w), height(h) {}
    
    void draw() const override {
        cout << "Drawing a rectangle of size " << width << "x" << height << endl;
    }
    
    void resize(int w, int h) override {
        width = w;
        height = h;
        cout << "Resized rectangle to " << width << "x" << height << endl;
    }
};

int main() {
    Rectangle rect(10, 5);
    rect.draw(); // Calls draw() method
    rect.resize(20, 10); // Calls resize() method
    rect.draw(); // Calls draw() method again

    return 0;
}
