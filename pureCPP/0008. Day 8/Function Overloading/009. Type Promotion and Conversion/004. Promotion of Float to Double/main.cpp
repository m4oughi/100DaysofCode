#include <iostream>
using namespace std;

void compute(double a) {
    cout << "Computing with double: " << a << endl;
}

int main() {
    float x = 4.5f;
    compute(x);  // Promotes float to double and calls compute(double)
    return 0;
}
