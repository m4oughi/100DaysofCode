#include <iostream>
using namespace std;

int main() {
    int num = 0x12345678;
    char* bytePtr = reinterpret_cast<char*>(&num);  // Reinterpret int as char*
    for (int i = 0; i < sizeof(int); ++i) {
        cout << "Byte " << i + 1 << ": " << hex << static_cast<int>(bytePtr[i]) << endl;
    }
    return 0;
}
