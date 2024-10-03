#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
public:
    Rectangle(int w, int h) : width(w), height(h) {}

    bool operator>(const Rectangle& other) const {
        return (width * height) > (other.width * other.height);
    }

    void display() const {
        cout << "Area: " << width * height << endl;
    }
};

int main() {
    Rectangle r1(4, 5), r2(3, 7);
    cout << (r1 > r2) << endl;  // Output: 0 (false)
    return 0;
}
