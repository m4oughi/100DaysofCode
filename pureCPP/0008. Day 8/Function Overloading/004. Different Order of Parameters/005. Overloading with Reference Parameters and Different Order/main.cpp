#include <iostream>
using namespace std;

void swap(int& a, double& b) {
    cout << "Before swap: int = " << a << ", double = " << b << endl;
    int temp = a;
    a = static_cast<int>(b);
    b = temp;
    cout << "After swap: int = " << a << ", double = " << b << endl;
}

void swap(double& b, int& a) {
    cout << "Before swap: double = " << b << ", int = " << a << endl;
    double temp = b;
    b = static_cast<double>(a);
    a = static_cast<int>(temp);
    cout << "After swap: double = " << b << ", int = " << a << endl;
}

int main() {
    int x = 5;
    double y = 10.5;
    
    swap(x, y);      // Calls swap(int&, double&)
    swap(y, x);      // Calls swap(double&, int&)
    return 0;
}
