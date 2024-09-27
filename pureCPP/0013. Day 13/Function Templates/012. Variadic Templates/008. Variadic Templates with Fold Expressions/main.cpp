#include <iostream>
using namespace std;

template<typename... Args>
void printAll(Args... args) {
    (cout << ... << args) << endl;  // Fold expression to print all arguments in one line
}

int main() {
    printAll(1, 2, 3, 4, "Hello");  // Prints: 1234Hello
    return 0;
}
