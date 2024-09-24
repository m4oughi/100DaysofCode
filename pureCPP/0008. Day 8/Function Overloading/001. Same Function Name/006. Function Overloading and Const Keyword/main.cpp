#include <iostream>
using namespace std;

void display(int& i) {
    cout << "Non-const Integer: " << i << endl;
}

void display(const int& i) {
    cout << "Const Integer: " << i << endl;
}

int main() {
    int x = 5;
    const int y = 10;
    display(x);         // Calls display(int&)
    display(y);         // Calls display(const int&)
    return 0;
}
