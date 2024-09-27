#include <iostream>
using namespace std;

template <typename T = int>
class Box {
    T value;
public:
    Box(T v) : value(v) {}
    void print() {
        cout << "Value in box: " << value << endl;
    }
};

int main() {
    Box<> intBox(100);    // Uses default type (int)
    Box<double> doubleBox(99.99); // Explicitly uses double type
    intBox.print();
    doubleBox.print();
    return 0;
}
