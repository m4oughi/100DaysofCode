#include <iostream>
using namespace std;

// Base class
class Base {
private:
    int value;
public:
    Base(int val) : value(val) { cout << "Base constructor called." << endl; }
    
    // Declare friend function
    friend void displayValue(const Base& obj);
};

// Friend function
void displayValue(const Base& obj) {
    cout << "Base value: " << obj.value << endl; // Access private member
}

int main() {
    Base b(10);
    displayValue(b); // Calls friend function to access private member

    return 0;
}
