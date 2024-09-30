#include <iostream>
using namespace std;

class Box {
private:
    int width;

public:
    Box(int w) : width(w) {}

    int getWidth() const {
        return width;
    }

    // Non-const function (won't be accessible for const objects)
    void setWidth(int w) {
        width = w;
    }
};

int main() {
    const Box b(10);
    cout << "Width: " << b.getWidth() << endl;  // Allowed (const member function)
    // b.setWidth(15);  // Error: cannot call non-const function on const object

    return 0;
}
