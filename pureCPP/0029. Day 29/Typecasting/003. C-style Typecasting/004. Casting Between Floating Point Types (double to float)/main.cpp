#include <iostream>
using namespace std;

int main() {
    double largeValue = 123.456;
    float smallValue = (float)largeValue;  // C-style casting from double to float
    cout << "Float value: " << smallValue << endl;
    return 0;
}
