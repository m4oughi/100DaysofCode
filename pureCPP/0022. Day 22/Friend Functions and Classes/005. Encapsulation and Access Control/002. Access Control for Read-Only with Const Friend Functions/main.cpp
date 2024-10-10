#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;  // Encapsulated data

public:
    Rectangle(int l, int w) : length(l), width(w) {}

    // Friend function providing read-only access to private members
    friend void displayDimensions(const Rectangle& rect);
};

// Const friend function providing read-only access to private members
void displayDimensions(const Rectangle& rect) {
    cout << "Length: " << rect.length << ", Width: " << rect.width << endl;
}

int main() {
    Rectangle rect(10, 5);
    displayDimensions(rect);  // Read-only access to encapsulated data
    return 0;
}
