#include <iostream>
using namespace std;

template <typename T>
class Point {
    T x, y;
public:
    Point(T a, T b) : x(a), y(b) {}
    void display() {
        cout << "X: " << x << ", Y: " << y << endl;
    }
};

template class Point<int>;   // Explicit instantiation for int
template class Point<double>; // Explicit instantiation for double

int main() {
    Point<int> p1(3, 4);      // Uses explicit instantiation
    Point<double> p2(2.5, 3.7); // Uses explicit instantiation
    p1.display();
    p2.display();
    return 0;
}
