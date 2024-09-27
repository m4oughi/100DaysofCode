#include <iostream>
using namespace std;

template <typename T1, typename T2>
void printSum(T1 a, T2 b) {
    cout << "Sum: " << a + b << endl;
}

int main() {
    printSum<int, double>(5, 3.5);  // Explicit template arguments
    printSum(5, 3.5);               // Implicit template argument deduction
    return 0;
}
