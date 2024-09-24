#include <iostream>

struct Point {
private:
    int x;
    int y;

public:
    void setValues(int a, int b) {
        x = a;
        y = b;
    }

    void printValues() const {
        std::cout << "x: " << x << ", y: " << y << std::endl;
    }
};

int main() {
    Point p;
    p.setValues(10, 20); // Indirect access via public methods
    p.printValues();
}
