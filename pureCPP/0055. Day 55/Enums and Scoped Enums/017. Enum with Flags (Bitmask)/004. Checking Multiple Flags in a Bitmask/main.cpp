#include <iostream>

enum class Permission : int {
    None     = 0,
    Read     = 1 << 0,
    Write    = 1 << 1,
    Execute  = 1 << 2,
    Admin    = Read | Write | Execute
};

bool hasPermissions(Permission p, Permission check) {
    return (static_cast<int>(p) & static_cast<int>(check)) == static_cast<int>(check);
}

int main() {
    Permission p = Permission::Read | Permission::Write;

    if (hasPermissions(p, Permission::Read)) {
        std::cout << "Read permission is granted.\n";
    }

    if (!hasPermissions(p, Permission::Execute)) {
        std::cout << "Execute permission is NOT granted.\n";
    }

    return 0;
}
