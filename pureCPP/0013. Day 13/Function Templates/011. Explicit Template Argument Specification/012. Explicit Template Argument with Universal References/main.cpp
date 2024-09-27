#include <iostream>
using namespace std;

template <typename T>
void forwardValue(T&& value) {
    cout << "Forwarded value: " << value << endl;
}

int main() {
    int x = 10;
    forwardValue<int>(x);    // Explicitly specifies T as int, forcing forwarding of an lvalue
    forwardValue<int>(20);   // Explicitly specifies T as int, forwarding an rvalue
    return 0;
}
