#include <iostream>
using namespace std;

int main() {
    int a = 42;
    double b = 3.5;

    auto result = (a > 10) ? a : b;  // int is promoted to double

    cout << "Result: " << result << endl;  // 42.0
    return 0;
}
