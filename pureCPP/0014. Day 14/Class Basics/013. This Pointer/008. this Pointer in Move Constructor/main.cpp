#include <iostream>
using namespace std;

class Box {
private:
    int* width;

public:
    Box(int w) : width(new int(w)) {}

    // Move constructor
    Box(Box&& other) noexcept {
        this->width = other.width;
        other.width = nullptr;
    }

    ~Box() {
        delete width;
    }

    void display() const {
        if (width)
            cout << "Width: " << *width << endl;
        else
            cout << "Width: nullptr" << endl;
    }
};

int main() {
    Box box1(50);
    Box box2 = move(box1);  // Invokes move constructor
    box2.display();
    box1.display();  // Width should be nullptr after move
    return 0;
}
