#include <iostream>
using namespace std;

template<typename T1>
void printValues(T1 value) {
    cout << value << endl;
}

template<typename T1, typename... Args>
void printValues(T1 first, Args... args) {
    cout << first << " ";
    printValues(args...);
}

int main() {
    printValues(1, 2.5, "Hello", 'A');
    return 0;
}
