#include <iostream>
using namespace std;

template <typename T>
void printRef(const T& value) {
    cout << "Constant reference: " << value << endl;
}

int main() {
    const double pi = 3.14159;
    printRef<double>(pi);  // Explicitly specifying T as double
    return 0;
}
