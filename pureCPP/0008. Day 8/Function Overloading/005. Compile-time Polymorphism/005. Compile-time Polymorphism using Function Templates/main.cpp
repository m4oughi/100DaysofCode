#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Sum of integers: " << add(5, 10) << endl;      // Calls add<int>
    cout << "Sum of doubles: " << add(2.5, 3.5) << endl;    // Calls add<double>
    
    return 0;
}
