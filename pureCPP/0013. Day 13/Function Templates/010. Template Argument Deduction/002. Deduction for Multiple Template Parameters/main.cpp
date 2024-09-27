#include <iostream>
using namespace std;

template <typename T, typename U>
void display(T first, U second) {
    cout << "First: " << first << ", Second: " << second << endl;
}

int main() {
    display(10, 3.14);   // Deduces T as int and U as double
    display('A', "Hello"); // Deduces T as char and U as const char*
    return 0;
}
