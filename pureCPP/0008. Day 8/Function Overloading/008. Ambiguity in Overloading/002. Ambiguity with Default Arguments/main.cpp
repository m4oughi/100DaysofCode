#include <iostream>
using namespace std;

void display(int a, int b = 10) {
    cout << "Display integers: " << a << ", " << b << endl;
}

void display(double a, double b = 5.5) {
    cout << "Display doubles: " << a << ", " << b << endl;
}

int main() {
    display(5);  // Ambiguous: Could call either display(int, int) or display(double, double)
    return 0;
}
