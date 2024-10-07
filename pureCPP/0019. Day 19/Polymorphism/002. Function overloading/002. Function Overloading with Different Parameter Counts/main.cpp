#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << "Addition of two integers: " << add(3, 4) << endl;
    cout << "Addition of three integers: " << add(1, 2, 3) << endl;
    return 0;
}
