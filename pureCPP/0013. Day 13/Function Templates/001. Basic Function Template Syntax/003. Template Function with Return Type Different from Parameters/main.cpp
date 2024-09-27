#include <iostream>
using namespace std;

template <typename T1, typename T2>
auto divide(T1 a, T2 b) -> decltype(a / b) {
    return a / b;
}

int main() {
    cout << "Division result: " << divide(10, 4) << endl;
    return 0;
}
