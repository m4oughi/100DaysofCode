#include <iostream>
using namespace std;

int main() {
    int x = 9, y = 2;
    double result = static_cast<double>(x) / y;  // Static cast from int to double
    cout << "Result: " << result << endl;
    return 0;
}
