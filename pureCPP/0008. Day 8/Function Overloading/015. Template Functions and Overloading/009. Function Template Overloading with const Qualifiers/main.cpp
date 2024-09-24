#include <iostream>
using namespace std;

template<typename T>
void print(const T& value) {
    cout << "Const template: " << value << endl;
}

template<typename T>
void print(T& value) {
    cout << "Non-const template: " << value << endl;
}

int main() {
    int a = 10;
    const int b = 20;

    print(a); // Calls non-const template
    print(b); // Calls const template

    return 0;
}
