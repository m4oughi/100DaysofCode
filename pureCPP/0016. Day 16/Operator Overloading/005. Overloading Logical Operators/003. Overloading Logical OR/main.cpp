#include <iostream>
using namespace std;

class Logic {
    bool value;
public:
    Logic(bool v) : value(v) {}

    bool operator||(const Logic& other) const {
        return value || other.value;
    }

    void display() const {
        cout << value << endl;
    }
};

int main() {
    Logic l1(true), l2(false);
    cout << (l1 || l2) << endl;  // Output: 1 (true)
    Logic l3(false);
    cout << (l2 || l3) << endl;  // Output: 0 (false)
    return 0;
}
