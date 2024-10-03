#include <iostream>
using namespace std;

class Boolean {
    bool value;
public:
    Boolean(bool v) : value(v) {}

    bool operator!() const {
        return !value;
    }

    void display() const {
        cout << value << endl;
    }
};

int main() {
    Boolean b1(true), b2(false);
    cout << !b1 << endl;  // Output: 0 (false)
    cout << !b2 << endl;  // Output: 1 (true)
    return 0;
}
