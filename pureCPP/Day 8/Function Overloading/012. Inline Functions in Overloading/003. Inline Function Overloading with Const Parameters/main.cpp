#include <iostream>
using namespace std;

class Operations {
public:
    // Inline function for const reference
    inline int square(const int& x) {
        return x * x;
    }

    // Inline function for non-const reference (for modification)
    inline int square(int& x) {
        x = x * x;
        return x;
    }
};

int main() {
    int a = 5;
    const int b = 6;

    Operations ops;
    cout << "Square of const: " << ops.square(b) << endl; // Calls const version
    cout << "Square of non-const: " << ops.square(a) << endl; // Calls non-const version and modifies a
    cout << "Modified a: " << a << endl;
    return 0;
}
