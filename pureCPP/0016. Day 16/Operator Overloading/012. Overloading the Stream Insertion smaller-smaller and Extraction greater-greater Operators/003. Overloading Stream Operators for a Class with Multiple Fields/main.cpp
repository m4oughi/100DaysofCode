#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
public:
    Rectangle(int w = 0, int h = 0) : width(w), height(h) {}

    // Overload the stream extraction operator
    friend istream& operator>>(istream& is, Rectangle& rect) {
        is >> rect.width >> rect.height;
        return is;
    }

    // Overload the stream insertion operator
    friend ostream& operator<<(ostream& os, const Rectangle& rect) {
        os << "Width: " << rect.width << ", Height: " << rect.height;
        return os;
    }
};

int main() {
    Rectangle rect;
    cout << "Enter width and height: ";
    cin >> rect;
    cout << "Rectangle details: " << rect << endl;
    return 0;
}
