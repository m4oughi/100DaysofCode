#include <iostream>

template<typename T>
struct Point {
    T x;
    T y;

    void print() const {
        std::cout << "x: " << x << ", y: " << y << std::endl;
    }
};

int main() {
    Point<int> p = {10, 20};
    p.print(); // Access using template struct
}
