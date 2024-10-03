#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int v) : value(v) {}

    Number operator%(const Number& other) {
        return Number(value % other.value);
    }

    void display() const {
        cout << value << endl;
    }
};

int main() {
    Number n1(10), n2(3);
    Number n3 = n1 % n2;
    n3.display();  // Output: 1
    return 0;
}
