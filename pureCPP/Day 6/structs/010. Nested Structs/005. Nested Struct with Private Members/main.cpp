#include <iostream>

struct Inner {
private:
    int x;
    int y;

public:
    Inner(int a, int b) : x(a), y(b) {}

    void print() const {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};

struct Outer {
    Inner point;
    
    Outer(int a, int b) : point(a, b) {}

    void display() const {
        point.print();
    }
};

int main() {
    Outer o(10, 20);
    o.display();
}
