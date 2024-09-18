#include <iostream>
using namespace std;

void display(int& a) {
    cout << "Non-const reference: " << a << endl;
}

void display(const int& a) {
    cout << "Const reference: " << a << endl;
}

int main() {
    int x = 10;
    const int y = 20;
    
    display(x); // Calls non-const version
    display(y); // Calls const version

    return 0;
}
