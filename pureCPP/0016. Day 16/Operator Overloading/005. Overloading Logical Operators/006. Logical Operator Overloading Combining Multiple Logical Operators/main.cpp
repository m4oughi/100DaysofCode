#include <iostream>
using namespace std;

class Boolean {
    bool value;
public:
    Boolean(bool v) : value(v) {}

    bool operator&&(const Boolean& other) const {
        return value && other.value;
    }

    bool operator||(const Boolean& other) const {
        return value || other.value;
    }

    bool operator!() const {
        return !value;
    }

    void display() const {
        cout << value << endl;
    }
};

int main() {
    Boolean b1(true), b2(false), b3(true);
    
    cout << (b1 && b2) << endl;  // Output: 0 (false)
    cout << (b1 || b2) << endl;  // Output: 1 (true)
    cout << (!b2 || b3) << endl; // Output: 1 (true)
    
    return 0;
}
