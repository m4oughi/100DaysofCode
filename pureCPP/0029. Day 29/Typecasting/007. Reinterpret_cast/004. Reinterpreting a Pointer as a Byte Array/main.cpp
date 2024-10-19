#include <iostream>
using namespace std;

struct Data {
    int x;
    float y;
};

int main() {
    Data d = {42, 3.14f};

    // Reinterpret the Data pointer as a byte array
    char* byteArray = reinterpret_cast<char*>(&d);

    // Access each byte of the struct
    for (size_t i = 0; i < sizeof(Data); ++i) {
        cout << "Byte " << i << ": " << static_cast<int>(byteArray[i]) << endl;
    }

    return 0;
}
