#include <iostream>
using namespace std;

class MathHelper {
public:
    static int add(int a, int b) {
        return a + b;
    }

    static int subtract(int a, int b) {
        return a - b;
    }
};

int main() {
    // Access helper methods globally without global variables
    int sum = MathHelper::add(5, 3);
    int diff = MathHelper::subtract(10, 4);

    cout << "Sum: " << sum << endl;        // Output: Sum: 8
    cout << "Difference: " << diff << endl;  // Output: Difference: 6
    return 0;
}
