#include <iostream>
using namespace std;

template <typename T>
void forwardValue(T&& value) {
    cout << "Forwarded value: " << value << endl;
}

int main() {
    int x = 10;
    forwardValue(x);       // Deduces T as int&
    forwardValue(20);      // Deduces T as int
    return 0;
}
