#include <iostream>
using namespace std;

class Outer {
private:
    class Inner {
    private:
        int innerValue;

    public:
        Inner(int value) : innerValue(value) {}

        // Granting access to a friend function
        friend void displayInnerValue(Outer::Inner&);
    };

    Inner inner;

public:
    Outer(int value) : inner(value) {}

    void display() {
        displayInnerValue(inner);  // Access private member of the nested class
    }
};

// Friend function accessing private member of Inner class
void displayInnerValue(Outer::Inner& inner) {
    cout << "Inner Value: " << inner.innerValue << endl;
}

int main() {
    Outer outer(42);
    outer.display();  // Friend function accessing private members of the nested class
    return 0;
}
