#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int v) : value(v) {}

    bool operator<=(const Number& other) const {
        return value <= other.value;
    }

    void display() const {
        cout << value << endl;
    }
};

int main() {
    Number n1(5), n2(10);
    cout << (n1 <= n2) << endl;  // Output: 1 (true)
    return 0;
}
