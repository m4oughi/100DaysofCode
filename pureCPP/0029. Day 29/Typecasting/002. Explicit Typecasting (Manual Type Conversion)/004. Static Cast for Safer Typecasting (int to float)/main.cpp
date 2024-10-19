#include <iostream>
using namespace std;

int main() {
    int a = 5;
    float b = static_cast<float>(a);  // Explicit conversion using static_cast
    cout << "Converted value: " << b << endl;
    return 0;
}
