#include <iostream>

enum class Permissions : int {
    None    = 0,
    Read    = 1 << 0,
    Write   = 1 << 1,
    Execute = 1 << 2,
    All     = Read | Write | Execute
};

void printPermissions(Permissions p) {
    if (static_cast<int>(p) & static_cast<int>(Permissions::Read)) std::cout << "Read ";
    if (static_cast<int>(p) & static_cast<int>(Permissions::Write)) std::cout << "Write ";
    if (static_cast<int>(p) & static_cast<int>(Permissions::Execute)) std::cout << "Execute ";
    std::cout << "\n";
}

int main() {
    Permissions p = Permissions::None;

    // Setting permissions
    p = static_cast<Permissions>(static_cast<int>(p) | static_cast<int>(Permissions::Read) | static_cast<int>(Permissions::Write));
    printPermissions(p);

    // Unsetting a permission (removing Write permission)
    p = static_cast<Permissions>(static_cast<int>(p) & ~static_cast<int>(Permissions::Write));
    printPermissions(p);

    // Toggling Execute permission (if it's set, remove it; if it's not, add it)
    p = static_cast<Permissions>(static_cast<int>(p) ^ static_cast<int>(Permissions::Execute));
    printPermissions(p);

    return 0;
}
