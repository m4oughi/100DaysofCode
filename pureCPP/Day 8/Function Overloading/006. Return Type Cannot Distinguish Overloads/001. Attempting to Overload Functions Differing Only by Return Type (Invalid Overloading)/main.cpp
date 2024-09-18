#include <iostream>
using namespace std;

// Invalid function overloading based on return type
int compute(int a) {
    return a * 2;
}

double compute(int a) {
    return a * 2.5;
}

int main() {
    int result = compute(10);   // Ambiguous call
    cout << "Result: " << result << endl;
    return 0;
}
