#include <iostream>

struct ManualPadding {
    char a;     // 1 byte
    char pad[3]; // 3 bytes padding
    int b;      // 4 bytes
};

int main() {
    ManualPadding m;
    std::cout << "Size of ManualPadding: " << sizeof(m) << " bytes" << std::endl;
}
