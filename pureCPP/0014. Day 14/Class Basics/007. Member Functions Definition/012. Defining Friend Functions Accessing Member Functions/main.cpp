#include <iostream>
using namespace std;

class Square {
private:
    int side;

public:
    Square(int s) : side(s) {}

    // Declaring a friend function
    friend int calculatePerimeter(Square s);
};

// Friend function definition
int calculatePerimeter(Square s) {
    return 4 * s.side;  // Accessing private member
}

int main() {
    Square square(5);
    cout << "Perimeter: " << calculatePerimeter(square) << endl;
    return 0;
}
