#include <iostream>
using namespace std;

class Test {
    int value;
public:
    Test(int v) : value(v) {}

    // Friend function needed to overload << for ostream
    friend ostream& operator<<(ostream& os, const Test& t) {
        os << t.value;
        return os;
    }
};

int main() {
    Test t1(5);
    cout << t1 << endl;  // Output: 5
    return 0;
}
