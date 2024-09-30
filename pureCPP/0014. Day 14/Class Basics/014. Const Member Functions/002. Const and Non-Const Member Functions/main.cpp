#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    Rectangle(int l, int w) : length(l), width(w) {}

    int getLength() const {  // Const version
        return length;
    }

    int& getLength() {  // Non-const version
        return length;
    }
};

int main() {
    const Rectangle rectConst(5, 10);
    Rectangle rectNonConst(5, 10);

    cout << "Const Rectangle Length: " << rectConst.getLength() << endl;
    cout << "Non-Const Rectangle Length: " << rectNonConst.getLength() << endl;

    rectNonConst.getLength() = 15;  // Modifying non-const object
    cout << "Updated Non-Const Rectangle Length: " << rectNonConst.getLength() << endl;

    return 0;
}
