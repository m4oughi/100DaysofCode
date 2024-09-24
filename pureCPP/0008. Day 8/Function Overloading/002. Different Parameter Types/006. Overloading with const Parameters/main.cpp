#include <iostream>
using namespace std;

void process(const int& a) {
    cout << "Const Integer: " << a << endl;
}

void process(int& a) {
    a += 10;
    cout << "Non-Const Integer (Modified): " << a << endl;
}

int main() {
    int x = 10;
    const int y = 20;
    
    process(x);    // Calls process(int&)
    process(y);    // Calls process(const int&)
    
    return 0;
}
