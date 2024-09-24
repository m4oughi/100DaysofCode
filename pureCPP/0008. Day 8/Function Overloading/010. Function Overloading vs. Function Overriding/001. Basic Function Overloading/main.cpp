#include <iostream>
using namespace std;

class Math {
public:
    void add(int a, int b) {
        cout << "Sum of integers: " << a + b << endl;
    }

    void add(double a, double b) {
        cout << "Sum of doubles: " << a + b << endl;
    }
};

int main() {
    Math math;
    math.add(2, 3);        // Calls add(int, int)
    math.add(2.5, 3.5);    // Calls add(double, double)
    return 0;
}
