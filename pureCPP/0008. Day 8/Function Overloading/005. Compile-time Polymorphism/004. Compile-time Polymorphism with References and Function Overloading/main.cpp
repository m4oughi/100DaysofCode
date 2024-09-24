#include <iostream>
using namespace std;

void update(int& a) {
    a += 10;
    cout << "Updated integer: " << a << endl;
}

void update(double& b) {
    b += 10.5;
    cout << "Updated double: " << b << endl;
}

int main() {
    int x = 5;
    double y = 10.0;

    update(x);   // Calls update(int&)
    update(y);   // Calls update(double&)
    
    return 0;
}
