#include <iostream>
using namespace std;

class Outer {
private:
    class Inner {
    private:
        int innerValue;

    public:
        Inner(int value) : innerValue(value) {}

        // Granting access to the outer class
        friend class Outer;
    };

    Inner inner;

public:
    Outer(int value) : inner(value) {}

    void displayInnerValue() {
        cout << "Inner Value: " << inner.innerValue << endl;  // Accessing private member of Inner
    }
};

int main() {
    Outer outer(42);
    outer.displayInnerValue();  // Outer class accessing private members of nested Inner class
    return 0;
}
