#include <iostream>
using namespace std;

class MyClass {
private:
    int value;  // Private member

public:
    MyClass(int v) : value(v) {}

    // Friend function declaration
    friend void displayValue(MyClass obj);
};

// Friend function defined outside both class and main function scope
void displayValue(MyClass obj) {
    cout << "Value: " << obj.value << endl;  // Accessing private member
}

int main() {
    MyClass obj(100);
    displayValue(obj);  // Friend function in a completely different scope
    return 0;
}
