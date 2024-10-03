#include <iostream>
using namespace std;

template <typename T>
class Box {
    T value;
public:
    Box(T v) : value(v) {}

    // Conversion operator to convert Box<T> to T
    operator T() const {
        return value;
    }

    void display() const {
        cout << "Box value: " << value << endl;
    }
};

int main() {
    Box<int> intBox(42);
    Box<double> doubleBox(3.14);

    int intValue = intBox;        // Implicit conversion from Box<int> to int
    double doubleValue = doubleBox;  // Implicit conversion from Box<double> to double

    cout << "intValue: " << intValue << endl;  // Output: 42
    cout << "doubleValue: " << doubleValue << endl;  // Output: 3.14

    return 0;
}
