#include <iostream>
using namespace std;

template <typename T>
void show(T a) {
    cout << "Template show: " << a << endl;
}

void show(int a) {
    cout << "Regular show: " << a << endl;
}

int main() {
    show(10);  // Ambiguous: Could call either template or regular function
    return 0;
}
