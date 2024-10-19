#include <iostream>
using namespace std;

int main() {
    uint32_t intValue = 0x40490FDB;  // Bit pattern for float 3.14159 (approximately)

    // Reinterpret the integer as a float
    float floatValue = reinterpret_cast<float&>(intValue);
    
    cout << "Interpreted float value: " << floatValue << endl;
    return 0;
}
