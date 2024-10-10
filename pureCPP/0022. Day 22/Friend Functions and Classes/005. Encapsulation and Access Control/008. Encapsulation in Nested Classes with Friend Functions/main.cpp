#include <iostream>
using namespace std;

class Outer {
private:
    class Inner {
    private:
        int value;  // Encapsulated private member

    public:
        Inner(int v) : value(v) {}

        // Declare friend function
        friend void displayInnerValue(Outer::Inner&);
    };

    Inner inner;

public:
    Outer(int v) : inner(v) {}

    void display() {
        displayInnerValue(inner);  // Controlled access to encapsulated inner class
    }
};

// Friend function accessing private member of nested class
void displayInnerValue(Outer::Inner& inner) {
    cout << "Inner Value: " << inner.value << endl;
}

int main() {
    Outer outer(42);
    outer.display();  // Friend function accessing encapsulated nested class data
    return 0;
}
