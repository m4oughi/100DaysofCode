#include <iostream>
using namespace std;

class Operations {
public:
    // Overloaded function with simple logic (inlining beneficial)
    inline int add(int a, int b) {
        return a + b;
    }

    // Overloaded function with complex logic (inlining not beneficial)
    int add(int a, int b, int c) {
        for (int i = 0; i < 1000000; ++i) {
            a += b * c;
        }
        return a;
    }
};

int main() {
    Operations ops;

    cout << "Simple add: " << ops.add(1, 2) << endl;      // Inlined
    cout << "Complex add: " << ops.add(1, 2, 3) << endl;  // Regular function call
    return 0;
}
