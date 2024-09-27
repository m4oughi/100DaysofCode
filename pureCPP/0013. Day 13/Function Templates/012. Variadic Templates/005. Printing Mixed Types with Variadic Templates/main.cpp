#include <iostream>
using namespace std;

template<typename T>
void printSingle(T arg) {
    cout << arg << endl;
}

template<typename T, typename... Args>
void printMixed(T first, Args... args) {
    cout << first << " ";  // Print the first argument
    printMixed(args...);   // Recursively process the remaining arguments
}

void printMixed() {
    // Base case: do nothing
}

int main() {
    printMixed(1, "Hello", 2.5, 'A');  // Prints: 1 Hello 2.5 A
    return 0;
}
