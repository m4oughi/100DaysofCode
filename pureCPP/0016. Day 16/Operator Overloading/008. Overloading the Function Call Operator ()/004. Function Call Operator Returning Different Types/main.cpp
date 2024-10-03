#include <iostream>
#include <string>
using namespace std;

class FunctionCall {
public:
    // Overloading the function call operator for integer input
    int operator()(int x) {
        return x * x;  // Return the square of the integer
    }

    // Overloading the function call operator for string input
    string operator()(const string& str) {
        return str + str;  // Return the string concatenated with itself
    }
};

int main() {
    FunctionCall func;  // Create a FunctionCall object

    cout << "Square of 5 = " << func(5) << endl;  // Output: Square of 5 = 25
    cout << "Concatenation of 'Hello' = " << func("Hello") << endl;  // Output: Concatenation of 'Hello' = HelloHello

    return 0;
}
