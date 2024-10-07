#include <iostream>
#include <any>
using namespace std;

int main() {
    any data = 10;  // Store an integer in any

    try {
        cout << any_cast<int>(data) << endl;  // Safely retrieve integer value
    } catch (const bad_any_cast& e) {
        cout << "Bad cast: " << e.what() << endl;
    }

    data = "Hello";  // Change to a string
    try {
        cout << any_cast<const char*>(data) << endl;  // Safely retrieve string
    } catch (const bad_any_cast& e) {
        cout << "Bad cast: " << e.what() << endl;
    }

    return 0;
}
