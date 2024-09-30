#include <iostream>
using namespace std;

class Square {
public:
    int side;

    Square(int s) : side(s) {}

    int getArea() {
        return side * side;
    }
};

Square createSquare(int sideLength) {  // Returning object by value
    Square temp(sideLength);
    return temp;
}

int main() {
    Square sq = createSquare(4);  // Object passed and returned by value
    cout << "Area: " << sq.getArea() << endl;

    return 0;
}
