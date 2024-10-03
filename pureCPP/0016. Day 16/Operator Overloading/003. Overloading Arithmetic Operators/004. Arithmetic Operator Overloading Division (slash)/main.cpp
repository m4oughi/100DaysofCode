#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int v) : value(v) {}

    Number operator/(const Number& other) {
        if (other.value == 0) {
            throw runtime_error("Division by zero!");
        }
        return Number(value / other.value);
    }

    void display() const {
        cout << value << endl;
    }
};

int main() {
    try {
        Number n1(20), n2(4);
        Number n3 = n1 / n2;
        n3.display();  // Output: 5
    } catch (const runtime_error& e) {
        cout << e.what() << endl;
    }
    return 0;
}
