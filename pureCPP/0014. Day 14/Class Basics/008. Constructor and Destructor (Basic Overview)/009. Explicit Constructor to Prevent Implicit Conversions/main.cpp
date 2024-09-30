#include <iostream>
using namespace std;

class Currency {
private:
    double value;

public:
    // Explicit constructor prevents implicit conversion
    explicit Currency(double v) : value(v) {}

    void display() {
        cout << "Currency value: $" << value << endl;
    }
};

int main() {
    Currency c1(10.5);  // Constructor called
    // Currency c2 = 20.0;  // This would cause a compile-time error due to the explicit constructor

    c1.display();
    return 0;
}
