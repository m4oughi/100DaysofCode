#include <iostream>
using namespace std;

class Box {
private:
    int length, width;

public:
    Box(int l, int w) : length(l), width(w) {}

    // Friend function declaration
    friend int calculateArea(Box box);
};

// Friend function accessing private members
int calculateArea(Box box) {
    return box.length * box.width;
}

int main() {
    Box box(10, 5);
    cout << "Area: " << calculateArea(box) << endl;  // Friend function accessing private data
    return 0;
}
