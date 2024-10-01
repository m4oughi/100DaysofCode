#include <iostream>

class Point {
private:
    int x, y;
public:
    Point() {
        x = 0;
        y = 0;
        std::cout << "Point initialized to (0,0)" << std::endl;
    }
};

int main() {
    Point p1;
    return 0;
}
