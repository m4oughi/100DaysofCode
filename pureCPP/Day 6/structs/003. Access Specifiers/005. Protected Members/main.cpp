#include <iostream>

struct Shape {
protected:
    double area;

public:
    virtual void calculateArea() = 0; // Pure virtual function
    double getArea() const {
        return area;
    }
};

struct Square : public Shape {
public:
    double side;

    Square(double s) : side(s) {}

    void calculateArea() override {
        area = side * side;
    }
};


int main() {


    return 0;
}