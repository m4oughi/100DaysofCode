#include <iostream>
using namespace std;

template <typename T>
void printRef(T& value) {
    cout << "Reference value: " << value << endl;
}

int main() {
    int num = 100;
    printRef(num);  // Deduces T as int, no need for explicit template argument
    return 0;
}
