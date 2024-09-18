#include <iostream>
using namespace std;

void analyze(float a) {
    cout << "Analyzing float: " << a << endl;
}

void analyze(double a) {
    cout << "Analyzing double: " << a << endl;
}

void analyze(long a) {
    cout << "Analyzing long: " << a << endl;
}

int main() {
    int x = 100;
    float y = 10.5f;
    double z = 20.5;

    analyze(x);  // Promotes int to long, calls analyze(long)
    analyze(y);  // Calls analyze(float) directly
    analyze(z);  // Calls analyze(double) directly
    return 0;
}
