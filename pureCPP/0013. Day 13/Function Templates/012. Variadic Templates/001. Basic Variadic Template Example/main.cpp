#include <iostream>
using namespace std;

template<typename... Args>
void print(Args... args) {
    (cout << ... << args) << endl;  // Fold expression to print all arguments
}

int main() {
    print(1, 2, 3);        // Prints: 123
    print("Hello", ' ', "World");  // Prints: Hello World
    return 0;
}
