#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int v) : value(v) {}

    Number& operator=(const Number& other) {
        if (this == &other) return *this;  // Self-assignment check
        value = other.value;
        return *this;
    }

    void display() const {
        cout << value << endl;
    }
};

int main() {
    Number n1(10), n2(20);
    n1 = n1;  // Self-assignment
    n1.display();  // Output: 10
    return 0;
}
