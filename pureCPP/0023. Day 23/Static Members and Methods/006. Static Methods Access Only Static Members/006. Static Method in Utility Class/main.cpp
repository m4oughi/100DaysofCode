#include <iostream>
using namespace std;

class MathUtils {
private:
    static int lastResult;  // Static member to hold the last result

public:
    static int add(int a, int b) {
        lastResult = a + b;  // Static method modifying static member
        return lastResult;
    }

    static int getLastResult() {
        return lastResult;  // Static method returning static member
    }
};

// Initialize static member outside the class
int MathUtils::lastResult = 0;

int main() {
    int result = MathUtils::add(5, 3);
    cout << "Result: " << result << endl;  // Output: 8

    cout << "Last Result: " << MathUtils::getLastResult() << endl;  // Output: 8

    return 0;
}
