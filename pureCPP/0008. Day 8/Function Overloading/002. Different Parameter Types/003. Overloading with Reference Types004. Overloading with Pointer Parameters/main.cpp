#include <iostream>
using namespace std;

void modify(int& a) {
    a += 10;
    cout << "Modified Integer (by reference): " << a << endl;
}

void modify(double& b) {
    b += 5.5;
    cout << "Modified Double (by reference): " << b << endl;
}

int main() {
    int x = 20;
    double y = 30.0;
    
    modify(x);      // Calls modify(int&)
    modify(y);      // Calls modify(double&)
    
    return 0;
}
