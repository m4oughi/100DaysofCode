#include <iostream>
using namespace std;

enum Operation { ADD, SUBTRACT };

template <Operation op>
int performOperation(int a, int b) {
    if constexpr (op == ADD) {
        return a + b;
    } else {
        return a - b;
    }
}

int main() {
    cout << "Addition: " << performOperation<ADD>(10, 5) << endl;
    cout << "Subtraction: " << performOperation<SUBTRACT>(10, 5) << endl;
    return 0;
}
