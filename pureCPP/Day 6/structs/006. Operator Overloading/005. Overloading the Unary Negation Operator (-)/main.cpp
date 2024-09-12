#include <iostream>

struct Point {
    int x;
    int y;

    // Overloading the unary negation operator
    Point operator-() const {
        return {-x, -y};
    }
};

int main() {


    return 0;
}