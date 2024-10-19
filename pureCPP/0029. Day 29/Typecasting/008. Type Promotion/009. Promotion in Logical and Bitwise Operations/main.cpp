#include <iostream>
using namespace std;

int main() {
    unsigned char uc = 5;  // unsigned char type
    int result = ~uc;      // unsigned char is promoted to int before the bitwise NOT

    cout << "Result after bitwise NOT: " << result << endl;  // -6
    return 0;
}
