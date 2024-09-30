#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    void setLength(int l) {
        if (l > 0)
            length = l;
        else
            length = 0;
    }

    void setWidth(int w) {
        if (w > 0)
            width = w;
        else
            width = 0;
    }

    int getLength() {
        return length;
    }

    int getWidth() {
        return width;
    }

    int calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect;
    rect.setLength(5);
    rect.setWidth(3);

    cout << "Area: " << rect.calculateArea() << endl;
    return 0;
}
