#include <iostream>
using namespace std;

class Calculator {
public:
    static int add(int a, int b) {  // Static method
        return a + b;  // No access to any instance-specific members
    }
};

int main() {
    // Call static method via class name
    cout << "Sum: " << Calculator::add(3, 4) << endl;  // Output: 7
    return 0;
}
