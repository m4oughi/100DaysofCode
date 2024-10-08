#include <iostream>
using namespace std;

template <typename T>
class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function in template class
};

class Circle : public Shape<int> {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Square : public Shape<double> {
public:
    void draw() override {
        cout << "Drawing Square" << endl;
    }
};

int main() {
    Shape<int>* shape1 = new Circle();
    Shape<double>* shape2 = new Square();

    shape1->draw();  // Calls Circle's draw()
    shape2->draw();  // Calls Square's draw()

    delete shape1;
    delete shape2;
    return 0;
}
