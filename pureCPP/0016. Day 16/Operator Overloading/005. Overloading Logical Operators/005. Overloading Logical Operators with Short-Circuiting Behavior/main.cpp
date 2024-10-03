#include <iostream>
using namespace std;

class Logic {
    bool value;
public:
    Logic(bool v) : value(v) {}

    bool operator&&(const Logic& other) const {
        if (!value) return false;
        return other.value;
    }

    bool operator||(const Logic& other) const {
        if (value) return true;
        return other.value;
    }

    void display() const {
        cout << value << endl;
    }
};

int main() {
    Logic l1(false), l2(true), l3(false);

    cout << (l1 && l2) << endl;  // Output: 0 (false)
    cout << (l2 || l3) << endl;  // Output: 1 (true)
    return 0;
}
