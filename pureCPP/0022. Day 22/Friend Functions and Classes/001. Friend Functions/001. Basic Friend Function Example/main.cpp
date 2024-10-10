#include <iostream>
using namespace std;

class Box {
private:
    double width;

public:
    Box() : width(0) {}

    // Declaring a friend function
    friend void printWidth(Box box);
};

// Friend function definition
void printWidth(Box box) {
    cout << "Width of the box: " << box.width << endl;
}

int main() {
    Box box;
    printWidth(box);  // Friend function accessing private member
    return 0;
}
