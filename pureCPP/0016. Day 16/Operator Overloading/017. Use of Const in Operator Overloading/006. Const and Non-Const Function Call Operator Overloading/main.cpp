#include <iostream>
using namespace std;

class Callable {
    int state;
public:
    Callable(int s = 0) : state(s) {}

    // Non-const function call operator
    void operator()(int value) {
        state += value;
        cout << "State updated to: " << state << endl;
    }

    // Const function call operator (read-only access)
    void operator()(int value) const {
        cout << "State remains: " << state << endl;
    }
};

int main() {
    const Callable c1(5);  // c1 is const
    Callable c2(10);

    c1(3);  // Const version of operator() called Output: State remains: 5
    c2(3);  // Non-const version of operator() called Output: State updated to: 13

    return 0;
}
