#include <iostream>
using namespace std;

template <typename T>
void print(T value) {
    cout << "Template function: " << value << endl;
}

void print(int value) {
    cout << "Non-template function: " << value << endl;
}

int main() {
    print(10);            // Calls the non-template function
    print<double>(3.14);  // Explicitly specifies T as double, calls template function
    return 0;
}
