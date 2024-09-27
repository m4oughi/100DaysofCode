#include <iostream>
using namespace std;

void print() {
    cout << "End of recursion" << endl;
}

template<typename T, typename... Args>
void print(T first, Args... args) {
    cout << first << ", ";
    print(args...);  // Overloaded version calls recursively
}

int main() {
    print(1, 2, 3, 4);  // Prints: 1, 2, 3, 4, End of recursion
    print("Hello", 2.5, 'A');  // Prints: Hello, 2.5, A, End of recursion
    return 0;
}
