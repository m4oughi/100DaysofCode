#include <iostream>
using namespace std;

template <typename T1, typename T2>
void printPair(T1 a, T2 b) {
    cout << "Pair: (" << a << ", " << b << ")" << endl;
}

int main() {
    printPair(10, 3.14);
    printPair("Hello", 20);
    return 0;
}
