#include <iostream>
using namespace std;

void calculate(int a) {
    cout << "Integer calculation: " << a * 2 << endl;
}

void calculate(float a) {
    cout << "Float calculation: " << a * 2.5f << endl;
}

int main() {
    calculate(5.5);  // Ambiguous: Can convert 5.5 to either int or float
    return 0;
}
