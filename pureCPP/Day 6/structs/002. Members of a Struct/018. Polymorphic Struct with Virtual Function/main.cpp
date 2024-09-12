#include <iostream>

struct Shape {
    virtual double area() const = 0;
};

struct Rectangle : public Shape {
    double width, height;

    double area() const override {
        return width * height;
    }
};


int main() {


    return 0;
}