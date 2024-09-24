#include <iostream>
#include <variant>
using namespace std;

variant<int, double> compute(int a, bool returnInt) {
    if (returnInt) {
        return a * 2;
    } else {
        return a * 2.5;
    }
}

int main() {
    variant<int, double> result = compute(10, true);

    if (holds_alternative<int>(result)) {
        cout << "Integer Result: " << get<int>(result) << endl;
    } else if (holds_alternative<double>(result)) {
        cout << "Double Result: " << get<double>(result) << endl;
    }

    return 0;
}
