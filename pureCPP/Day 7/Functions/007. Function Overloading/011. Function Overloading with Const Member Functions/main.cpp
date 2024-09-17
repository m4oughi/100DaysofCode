#include <iostream>

class Point {
public:
    // Overloaded member functions with const
    void setX(int x) {
        this->x = x;
        std::cout << "Non-const setX: " << x << std::endl;
    }

    void setX(int x) const {
        std::cout << "Const setX: " << x << std::endl;
    }

private:
    int x;
};

int main() {
    Point p;
    p.setX(10);  // Calls non-const setX

    const Point p2;
    p2.setX(20);  // Calls const setX
    return 0;
}
