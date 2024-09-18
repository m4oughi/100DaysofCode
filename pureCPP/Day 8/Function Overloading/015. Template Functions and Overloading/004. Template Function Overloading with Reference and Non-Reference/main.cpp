#include <iostream>
using namespace std;

template<typename T>
void show(T a) {
    cout << "Non-reference template: " << a << endl;
}

template<typename T>
void show(T& a) {
    cout << "Reference template: " << a << endl;
}

int main() {
    int x = 10;
    const int y = 20;

    show(x); // Calls reference version
    show(30); // Calls non-reference version
    show(y); // Calls reference version with const

    return 0;
}
