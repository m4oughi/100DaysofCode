#include <iostream>
using namespace std;

int main() {
    float pi = 3.14159;
    int intPi = static_cast<int>(pi);  // Static cast from float to int (truncates decimal)
    cout << "Integer value of pi: " << intPi << endl;
    return 0;
}
