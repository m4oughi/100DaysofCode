#include <iostream>
using namespace std;

void increment(int& a) {
    a++;
    cout << "Incremented by 1: " << a << endl;
}

void increment(int& a, int& b) {
    a++;
    b++;
    cout << "Incremented both: " << a << ", " << b << endl;
}

int main() {
    int x = 10, y = 20;
    
    increment(x);        // Calls increment(int&)
    increment(x, y);     // Calls increment(int&, int&)
    
    return 0;
}
