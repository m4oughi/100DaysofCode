#include <iostream>
using namespace std;

class Calculator {
public:
    static int add(int a, int b) {  // Static member function
        return a + b;
    }
};

int main() {
    int result = Calculator::add(10, 20);  // Pass arguments to static function
    cout << "Sum: " << result << endl;  // Output: Sum: 30
    return 0;
}
