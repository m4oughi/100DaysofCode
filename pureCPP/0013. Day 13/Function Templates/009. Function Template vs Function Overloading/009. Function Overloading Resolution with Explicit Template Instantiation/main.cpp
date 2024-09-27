#include <iostream>
using namespace std;

void multiply(int a, int b) {
    cout << "Overloaded int version: " << a * b << endl;
}

template <typename T>
void multiply(T a, T b) {
    cout << "Template version: " << a * b << endl;
}

int main() {
    multiply(5, 10);           // Calls overloaded int version
    multiply<double>(5.5, 2.2); // Explicitly calls template version for double
    return 0;
}
