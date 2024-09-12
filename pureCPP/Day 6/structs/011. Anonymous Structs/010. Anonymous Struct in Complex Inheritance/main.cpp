#include <iostream>

struct Base {
    virtual void display() const = 0;
};

struct Derived : Base {
    struct {
        int x;
        int y;
    };

    void display() const override {
        std::cout << "x: " << x << ", y: " << y << std::endl;
    }
};

int main() {
    Derived d;
    d.x = 10;
    d.y = 20;
    
    d.display();
}
