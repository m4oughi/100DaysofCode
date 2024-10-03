#include <iostream>
using namespace std;

class Data {
    int x;
public:
    Data(int val) : x(val) {}

    Data operator-() const { // Const version
        return Data(-x);
    }

    Data operator-() { // Non-const version
        return Data(-x - 1);
    }

    void display() const {
        cout << x << endl;
    }
};

int main() {
    Data d1(10);
    const Data d2(20);

    d1 = -d1;  // Non-const method will be called
    d1.display(); // Output: -11

    Data d3 = -d2;  // Const method will be called
    d3.display(); // Output: -20

    return 0;
}
