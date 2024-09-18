#include <iostream>
using namespace std;

template<typename T>
void print(T value) {
    cout << value << " ";
}

template<typename T, typename... Args>
void print(T first, Args... args) {
    cout << first << " ";
    print(args...);
}

int main() {
    print(1, 2.5, "Hello", 'A');   // Variadic template
    return 0;
}
