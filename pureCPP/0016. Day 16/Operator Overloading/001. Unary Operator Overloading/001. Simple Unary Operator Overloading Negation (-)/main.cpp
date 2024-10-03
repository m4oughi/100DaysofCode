#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int v) : value(v) {}

    Number operator-() {
        return Number(-value);
    }

    void display() const {
        cout << value << endl;
    }
};

int main() {
    Number n1(5);
    Number n2 = -n1;
    n2.display();  // Output: -5
    return 0;
}
