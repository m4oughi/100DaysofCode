#include <iostream>
using namespace std;

void print(int a) {
    cout << "Overloaded int: " << a << endl;
}

template <typename T>
void print(T a) {
    cout << "Template version: " << a << endl;
}

int main() {
    print(5);      // Ambiguity: prefers exact match (int)
    print(3.14);   // Template used (no exact match for double)
    return 0;
}
