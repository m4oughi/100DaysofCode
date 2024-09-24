#include <iostream>

struct Triangle {
public:
    double base;
    double height;

private:
    double area;

public:
    void calculateArea() {
        area = 0.5 * base * height;
    }

    double getArea() const {
        return area;
    }
};


int main() {


    return 0;
}