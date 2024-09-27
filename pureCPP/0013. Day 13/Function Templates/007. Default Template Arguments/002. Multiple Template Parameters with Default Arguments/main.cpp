#include <iostream>
using namespace std;

template <typename T1 = int, typename T2 = double>
void sum(T1 a, T2 b) {
    cout << "Sum: " << a + b << endl;
}

int main() {
    sum(10, 20.5);     // Uses int and double
    sum(15);           // Uses int (default for T2 is double)
    sum(5.5, 10);      // Uses explicit double and int
    return 0;
}
