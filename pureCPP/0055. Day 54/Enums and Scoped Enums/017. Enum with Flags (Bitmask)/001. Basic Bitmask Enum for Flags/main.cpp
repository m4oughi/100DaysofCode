#include <iostream>

enum class Permission : int {
    None    = 0,
    Read    = 1 << 0,  // 0001
    Write   = 1 << 1,  // 0010
    Execute = 1 << 2,  // 0100
    All     = Read | Write | Execute  // 0111
};

int main() {
    Permission p = Permission::Read | Permission::Write;

    if (static_cast<int>(p) & static_cast<int>(Permission::Read)) {
        std::cout << "Read permission granted.\n";
    }

    if (static_cast<int>(p) & static_cast<int>(Permission::Write)) {
        std::cout << "Write permission granted.\n";
    }

    return 0;
}
