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
    Number n1(10), n2(20), n3(30);
    n1 = n2 = n3;  // Chaining assignment
    n1.display();  // Output: 30
    n2.display();  // Output: 30
    n3.display();  // Output: 30
    return 0;
}
