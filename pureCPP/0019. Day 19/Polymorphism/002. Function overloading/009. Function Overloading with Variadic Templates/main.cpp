#include <iostream>
using namespace std;

// Base case
void print() {
    cout << "No arguments" << endl;
}

// Overloaded function using variadic template
template <typename T, typename... Args>
void print(T first, Args... args) {
    cout << first << " ";
    print(args...);
}

int main() {
    print(1, 2.5, "Hello", 'c');
    print();

    return 0;
}
