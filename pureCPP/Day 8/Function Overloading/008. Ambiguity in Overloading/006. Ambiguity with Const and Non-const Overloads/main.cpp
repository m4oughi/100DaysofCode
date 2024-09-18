#include <iostream>
using namespace std;

void display(int& a) {
    cout << "Non-const display: " << a << endl;
}

void display(const int& a) {
    cout << "Const display: " << a << endl;
}

int main() {
    const int x = 10;
    display(x);  // Ambiguous: Both const and non-const versions could match
    return 0;
}
