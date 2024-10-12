#include <iostream>
using namespace std;

class Data {
public:
    static int intValue;         // Static integer member
    static float floatValue;     // Static float member
    static string stringValue;   // Static string member
};

// Initialize static members with different data types
int Data::intValue = 42;
float Data::floatValue = 3.14;
string Data::stringValue = "Hello, World!";

int main() {
    // Access static members via class name
    cout << "Integer value: " << Data::intValue << endl;  // Output: 42
    cout << "Float value: " << Data::floatValue << endl;  // Output: 3.14
    cout << "String value: " << Data::stringValue << endl;  // Output: Hello, World!
    return 0;
}
