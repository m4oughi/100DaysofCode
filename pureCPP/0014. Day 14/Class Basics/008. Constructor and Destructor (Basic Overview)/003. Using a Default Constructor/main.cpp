#include <iostream>
using namespace std;

class Square {
private:
    int side;

public:
    // Default constructor
    Square() {
        side = 1;
        cout << "Square created with default side: " << side << endl;
    }

    int calculateArea() {
        return side * side;
    }
};

int main() {
    Square sq;  // Default constructor called
    cout << "Area: " << sq.calculateArea() << endl;
    return 0;
}
