#include <iostream>
#include <string>
using namespace std;

template<typename... Args>
string combineStrings(Args... args) {
    return (args + ...);  // Fold expression to concatenate all strings
}

int main() {
    string result = combineStrings(string("Hello, "), "World", "!");
    cout << result << endl;  // Prints: Hello, World!
    return 0;
}
