#include <iostream>
using namespace std;

void calculate(int i) {
    cout << "Integer: " << i << endl;
}

void calculate(float f) {
    cout << "Float: " << f << endl;
}

int main() {
    calculate(5);       // Calls calculate(int)
    calculate(3.5f);    // Calls calculate(float)
    calculate('A');     // Calls calculate(int) (promotion from char to int)
    return 0;
}
