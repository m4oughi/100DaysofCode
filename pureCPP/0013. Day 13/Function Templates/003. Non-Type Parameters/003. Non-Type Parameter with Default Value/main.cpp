#include <iostream>
using namespace std;

template <int N = 10>
int increment(int x) {
    return x + N;
}

int main() {
    cout << "Increment by default (10): " << increment<>(5) << endl; // Uses default value
    cout << "Increment by 20: " << increment<20>(5) << endl;         // Explicit non-type parameter
    return 0;
}
