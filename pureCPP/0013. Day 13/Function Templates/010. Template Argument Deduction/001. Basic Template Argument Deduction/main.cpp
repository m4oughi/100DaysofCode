#include <iostream>
using namespace std;

template <typename T>
void print(T value) {
    cout << "Value: " << value << endl;
}

int main() {
    print(42);       // Template argument deduced as int
    print(3.14);     // Template argument deduced as double
    print("Hello");  // Template argument deduced as const char*
    return 0;
}
