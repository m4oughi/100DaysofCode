#include <iostream>
using namespace std;

int main() {
    float f = 5.5f;   // float type
    double d = 10.1;  // double type

    double result = f + d;  // float is promoted to double

    cout << "Result: " << result << endl;  // 15.6
    return 0;
}
