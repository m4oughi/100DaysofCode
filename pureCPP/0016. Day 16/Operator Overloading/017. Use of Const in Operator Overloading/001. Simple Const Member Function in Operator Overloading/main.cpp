#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int v = 0) : value(v) {}

    // Overloading + as a const member function
    Number operator+(const Number& other) const {
        return Number(value + other.value);
    }

    void display() const {
        cout << value << endl;
    }
};

int main() {
    const Number n1(5);  // n1 is const
    Number n2(10);

    Number n3 = n1 + n2;  // Operator + does not modify n1 or n2
    n3.display();  // Output: 15

    return 0;
}
