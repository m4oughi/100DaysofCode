#include <iostream>
using namespace std;

void fun(int& i) {
    cout << "L-value reference: " << i << endl;
}

void fun(int&& i) {
    cout << "R-value reference: " << i << endl;
}

int main() {
    int x = 10;
    fun(x);           // Calls fun(int&) (l-value reference)
    fun(20);          // Calls fun(int&&) (r-value reference)
    return 0;
}
