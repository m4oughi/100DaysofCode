#include <iostream>
using namespace std;

template <typename T>
void print(T value) {
    cout << "Generic print: " << value << endl;
}

template <>
void print<char>(char value) {
    cout << "Specialized print for char: " << value << endl;
}

int main() {
    print<int>(100);  // Calls generic print with explicit int specification
    print<char>('A');  // Calls specialized template for char
    return 0;
}
