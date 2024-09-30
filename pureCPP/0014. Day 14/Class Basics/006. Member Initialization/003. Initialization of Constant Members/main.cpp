#include <iostream>
using namespace std;

class Square {
private:
    const int side;

public:
    // Constant members must be initialized using initialization list
    Square(int s) : side(s) {}

    int calculateArea() {
        return side * side;
    }
};

int main() {
    Square sq(4);  // Object creation with constant member
    cout << "Area: " << sq.calculateArea() << endl;
    return 0;
}
