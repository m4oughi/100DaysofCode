#include <iostream>
using namespace std;

template<typename T>
void print(T arg) {
    cout << arg << endl;  // Base case: prints the last argument
}

template<typename T, typename... Args>
void print(T first, Args... args) {
    cout << first << " ";  // Print the first argument
    print(args...);        // Recursive call with the remaining arguments
}

int main() {
    print(1, 2, 3, 4, 5);  // Prints: 1 2 3 4 5
    print("Hello", "World");  // Prints: Hello World
    return 0;
}
