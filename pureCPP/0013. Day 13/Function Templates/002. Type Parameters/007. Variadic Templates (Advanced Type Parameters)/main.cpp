#include <iostream>
using namespace std;

template<typename T>
void printArgs(T arg) {
    cout << arg << endl;
}

template<typename T, typename... Args>
void printArgs(T first, Args... rest) {
    cout << first << " ";
    printArgs(rest...);
}

int main() {
    printArgs(1, 2.5, "Hello", 'A');
    return 0;
}
