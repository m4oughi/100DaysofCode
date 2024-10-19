#include <iostream>
using namespace std;

int main() {
    int x = 10;
    double y = 3.14;

    double result = x * y;  // int is promoted to double

    cout << "Result: " << result << endl;  // 31.4
    return 0;
}
