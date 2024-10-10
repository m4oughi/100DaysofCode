#include <iostream>
using namespace std;

class Outer {
private:
    class Inner {
    private:
        int innerValue;

    public:
        Inner(int value) : innerValue(value) {}

        // Declare Outer as a friend class
        friend class Outer;
    };

    Inner inner;

public:
    Outer(int value) : inner(value) {}

    void displayInnerValue() {
        cout << "Inner Value: " << inner.innerValue << endl;  // Accessing private member of Inner class
    }
};

int main() {
    Outer outer(42);
    outer.displayInnerValue();  // Friend class accessing private member of nested class
    return 0;
}
