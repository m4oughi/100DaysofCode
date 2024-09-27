#include <iostream>
using namespace std;

template <typename T1, typename T2>
void printValues(T1 a, T2 b) {
    cout << "Value 1: " << a << ", Value 2: " << b << endl;
}

int main() {
    printValues(10, 3.14);   // int and double
    printValues("Hello", 100); // string and int
    return 0;
}
