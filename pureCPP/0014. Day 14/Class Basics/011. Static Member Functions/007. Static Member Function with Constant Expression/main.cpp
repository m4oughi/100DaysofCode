#include <iostream>
using namespace std;

class Circle {
public:
    static constexpr double PI = 3.14159;  // Static const expression

    static double calculateArea(double radius) {
        return PI * radius * radius;
    }
};

int main() {
    cout << "Area of circle with radius 5: " << Circle::calculateArea(5) << endl;
    return 0;
}
