#include <iostream>
using namespace std;

template<typename T>
void print(T a, int precision = 2) {
    cout << "Template function: " << a << " with precision " << precision << endl;
}

void print(double a, int precision = 5) {
    cout << "Non-template for double: " << a << " with precision " << precision << endl;
}

int main() {
    print(10);             // Calls template function with default precision
    print(10.123456);      // Calls non-template function for double with default precision

    return 0;
}
