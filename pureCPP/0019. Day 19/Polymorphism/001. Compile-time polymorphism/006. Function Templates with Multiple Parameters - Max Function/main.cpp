#include <iostream>
using namespace std;

template <typename T1, typename T2>
auto max(T1 a, T2 b) -> decltype(a > b ? a : b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max of 10 and 20: " << max(10, 20) << endl;
    cout << "Max of 5.5 and 3: " << max(5.5, 3) << endl;

    return 0;
}
