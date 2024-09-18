#include <iostream>
using namespace std;

void sum(int a, float b) {
    cout << "Sum of int and float: " << a + b << endl;
}

void sum(float b, int a) {
    cout << "Sum of float and int: " << a + b << endl;
}

int main() {
    sum(5, 3.5f);       // Calls sum(int, float)
    sum(3.5f, 5);       // Calls sum(float, int)
    return 0;
}
