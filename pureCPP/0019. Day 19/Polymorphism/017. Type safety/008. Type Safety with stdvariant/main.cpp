#include <iostream>
#include <variant>
using namespace std;

int main() {
    variant<int, double, string> data;  // Type-safe union of types

    data = 10;          // Set variant to int
    cout << get<int>(data) << endl;

    data = 3.14;        // Set variant to double
    cout << get<double>(data) << endl;

    data = "Hello";     // Set variant to string
    cout << get<string>(data) << endl;

    return 0;
}
