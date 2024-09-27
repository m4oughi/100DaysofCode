#include <iostream>
using namespace std;

template <typename T>
void printRef(const T& value) {
    cout << "Const Reference: " << value << endl;
}

int main() {
    int num = 10;
    const double pi = 3.14159;
    
    printRef(num);  // Deduces T as int
    printRef(pi);   // Deduces T as const double
    return 0;
}
