#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int v) : value(v) {}

    Number& operator=(const Number& other) {
        value = other.value;  // Direct assignment
        return *this;
    }

    void display() const {
        cout << value << endl;
    }
};

int main() {
    Number n1(10), n2(20);
    n2 = n1;  // Assignment
    n2.display();  // Output: 10
    return 0;
}
