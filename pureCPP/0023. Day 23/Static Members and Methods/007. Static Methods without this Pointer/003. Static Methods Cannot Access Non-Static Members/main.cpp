#include <iostream>
using namespace std;

class Example {
public:
    int value = 10;  // Non-static member

    static void showValue() {
        // cout << value;  // ERROR: 'this' pointer is not available in static methods
        cout << "Static method cannot access non-static members." << endl;
    }
};

int main() {
    Example::showValue();  // Access static method via class name
    return 0;
}
