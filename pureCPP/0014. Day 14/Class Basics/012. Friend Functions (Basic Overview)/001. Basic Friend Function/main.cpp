#include <iostream>
using namespace std;

class Box {
private:
    int width;

public:
    Box(int w) : width(w) {}

    // Friend function declaration
    friend void printWidth(Box);
};

// Friend function definition
void printWidth(Box b) {
    cout << "Width: " << b.width << endl;
}

int main() {
    Box box(10);
    printWidth(box);  // Accessing private member using a friend function
    return 0;
}
