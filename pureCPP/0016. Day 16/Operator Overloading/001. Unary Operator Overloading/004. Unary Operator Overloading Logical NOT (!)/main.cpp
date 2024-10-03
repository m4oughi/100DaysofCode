#include <iostream>
using namespace std;

class Boolean {
    bool flag;
public:
    Boolean(bool f) : flag(f) {}

    bool operator!() const {
        return !flag;
    }

    void display() const {
        cout << boolalpha << flag << endl;
    }
};

int main() {
    Boolean b1(true);
    Boolean b2(false);
    
    cout << !b1 << endl; // Output: false
    cout << !b2 << endl; // Output: true
    
    return 0;
}
