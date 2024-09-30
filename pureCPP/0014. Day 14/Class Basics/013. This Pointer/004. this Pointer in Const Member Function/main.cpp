#include <iostream>
using namespace std;

class Box {
private:
    int width;

public:
    Box(int width) : width(width) {}

    void display() const {  // Const member function
        cout << "Width: " << this->width << endl;  // `this` is implicitly a pointer to const
    }
};

int main() {
    Box box(15);
    box.display();  // Calling const member function
    return 0;
}
