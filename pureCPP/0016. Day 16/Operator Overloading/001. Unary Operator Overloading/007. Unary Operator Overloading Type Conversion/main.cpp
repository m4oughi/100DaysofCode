#include <iostream>
using namespace std;

class Integer {
    int value;
public:
    Integer(int v) : value(v) {}

    operator int() const { // Conversion to int
        return value;
    }
};

int main() {
    Integer num(42);
    int x = num; // Implicit conversion using overloaded operator
    cout << x << endl; // Output: 42
    return 0;
}
