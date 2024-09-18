#include <iostream>
using namespace std;

class Operations {
public:
    // Inline function for integer comparison
    inline int max(int a, int b) {
        return (a > b) ? a : b;
    }

    // Inline function for double comparison
    inline double max(double a, double b) {
        return (a > b) ? a : b;
    }

    // Inline function for mixed types
    inline double max(int a, double b) {
        return (a > b) ? a : b;
    }
};

int main() {
    Operations ops;
    cout << "Max (int): " << ops.max(4, 7) << endl;
    cout << "Max (double): " << ops.max(3.5, 7.2) << endl;
    cout << "Max (mixed): " << ops.max(4, 7.2) << endl;
    return 0;
}
