#include <iostream>
using namespace std;

void process(int a) {
    cout << "Processing integer: " << a << endl;
}

void process(double a) {
    cout << "Processing double: " << a << endl;
}

int main() {
    process(4.5);  // Calls process(double) as 4.5 is a double
    process(10);   // Calls process(int) as 10 is an integer
    return 0;
}
