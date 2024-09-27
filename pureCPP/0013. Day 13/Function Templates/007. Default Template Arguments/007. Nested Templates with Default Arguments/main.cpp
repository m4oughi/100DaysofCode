#include <iostream>
using namespace std;

template <typename T = int>
class Outer {
public:
    template <typename U = double>
    void display(T a, U b) {
        cout << "T: " << a << ", U: " << b << endl;
    }
};

int main() {
    Outer<> outer;   // T defaults to int
    outer.display(10, 20.5);    // U defaults to double
    outer.display(42, 3.14f);   // Explicitly using float for U
    return 0;
}
