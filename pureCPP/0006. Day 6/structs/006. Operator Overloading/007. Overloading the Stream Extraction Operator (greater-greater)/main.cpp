#include <iostream>

#include <iostream>

struct Point {
    int x;
    int y;

    // Overloading the stream extraction operator
    friend std::istream& operator>>(std::istream& is, Point& p) {
        is >> p.x >> p.y;
        return is;
    }
};

int main() {


    return 0;
}