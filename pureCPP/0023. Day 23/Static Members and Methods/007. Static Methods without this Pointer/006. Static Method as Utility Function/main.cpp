#include <iostream>
using namespace std;

class MathUtils {
public:
    static int multiply(int a, int b) {  // Static method
        return a * b;  // No instance-specific behavior
    }
};

int main() {
    // Call static method directly without creating any object
    cout << "Multiplication: " << MathUtils::multiply(5, 6) << endl;  // Output: 30
    return 0;
}
