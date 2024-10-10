#include <iostream>
using namespace std;

template <typename T>
class Rectangle {
private:
    T length, width;

public:
    Rectangle(T l, T w) : length(l), width(w) {}

    // Declare friend class
    template <typename U>  // Template parameter for the friend class
    friend class Display;
};

template <typename U>
class Display {
public:
    void showDimensions(Rectangle<U>& rect) {
        cout << "Length: " << rect.length << ", Width: " << rect.width << endl;  // Access private members
    }
};

int main() {
    Rectangle<int> rect(10, 5);
    Display<int> display;
    display.showDimensions(rect);  // Friend class accessing private members of a template class
    return 0;
}
