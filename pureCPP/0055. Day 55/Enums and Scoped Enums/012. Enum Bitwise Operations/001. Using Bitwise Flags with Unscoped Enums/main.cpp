#include <iostream>

enum FilePermission {
    Read    = 1 << 0,  // 0001
    Write   = 1 << 1,  // 0010
    Execute = 1 << 2   // 0100
};

int main() {
    int permissions = Read | Execute;

    if (permissions & Read)
        std::cout << "Read permission granted.\n";

    if (permissions & Write)
        std::cout << "Write permission granted.\n";
    else
        std::cout << "Write permission denied.\n";
}
