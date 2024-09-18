#include <iostream>
using namespace std;

void process(int a, double b = 2.5) {
    cout << "Processing int: " << a << ", double: " << b << endl;
}

void process(double b, int a = 1) {
    cout << "Processing double: " << b << ", int: " << a << endl;
}

int main() {
    process(3);       // Calls process(int, double)
    process(5.5);     // Calls process(double, int)
    return 0;
}
