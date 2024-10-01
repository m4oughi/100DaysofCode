#include <iostream>

class Point {
private:
    int x, y;
public:
    // Member initialization list
    Point(int a, int b) : x(a), y(b) {
        std::cout << "Point initialized with x = " << x << " and y = " << y << std::endl;
    }
};

int main() {
    Point p(5, 10);  // Initializes x = 5 and y = 10
    return 0;
}
