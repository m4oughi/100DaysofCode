#include <iostream>
using namespace std;

template <typename T>
void display(T value) {
    cout << "Value: " << value << endl;
}

int main() {
    display<int>(42);  // Explicitly specifying T as int
    display<double>(3.14);  // Explicitly specifying T as double
    return 0;
}
