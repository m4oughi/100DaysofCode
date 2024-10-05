#include <iostream>
using namespace std;

class Drawable {
public:
    virtual void draw() = 0;  // Pure virtual function
};

class Scalable {
public:
    virtual void scale(float factor) = 0;  // Pure virtual function
};

class Transformable : public Drawable, public Scalable {
public:
    void draw() override {
        cout << "Drawing Transformable object" << endl;
    }

    void scale(float factor) override {
        cout << "Scaling Transformable object by factor " << factor << endl;
    }
};

int main() {
    Transformable obj;
    obj.draw();
    obj.scale(2.0f);
    return 0;
}
