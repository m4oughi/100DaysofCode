#include <iostream>
using namespace std;

class Box {
private:
    int length, width;

public:
    Box(int l, int w) : length(l), width(w) {}

    // Friend function declaration
    friend void resize(Box&, int, int);
};

// Friend function definition
void resize(Box& b, int newLength, int newWidth) {
    b.length = newLength;
    b.width = newWidth;
}

int main() {
    Box box(5, 10);
    resize(box, 7, 12);

    return 0;
}
