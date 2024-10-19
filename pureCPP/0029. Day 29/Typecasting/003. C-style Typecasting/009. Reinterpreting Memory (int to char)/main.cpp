#include <iostream>
using namespace std;

int main() {
    int num = 65;
    char* bytePtr = (char*)&num;  // C-style casting int* to char*
    cout << "Byte value: " << *bytePtr << endl;  // Prints 'A' (ASCII value of 65)
    return 0;
}
