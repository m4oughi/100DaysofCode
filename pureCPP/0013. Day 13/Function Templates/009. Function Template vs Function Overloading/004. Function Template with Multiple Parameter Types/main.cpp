#include <iostream>
using namespace std;

template <typename T, typename U>
void add(T a, U b) {
    cout << "Sum: " << a + b << endl;
}

int main() {
    add(5, 10);        // Template instantiated for (int, int)
    add(5, 3.14);      // Template instantiated for (int, double)
    return 0;
}
