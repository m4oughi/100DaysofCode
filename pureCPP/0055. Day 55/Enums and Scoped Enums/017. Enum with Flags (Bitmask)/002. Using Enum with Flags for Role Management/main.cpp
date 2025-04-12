#include <iostream>

enum class Role : int {
    None        = 0,
    Admin       = 1 << 0,  // 0001
    Moderator   = 1 << 1,  // 0010
    User        = 1 << 2,  // 0100
    All         = Admin | Moderator | User  // 0111
};

int main() {
    Role role = Role::Admin | Role::User;

    if (static_cast<int>(role) & static_cast<int>(Role::Admin)) {
        std::cout << "User has Admin role.\n";
    }

    if (static_cast<int>(role) & static_cast<int>(Role::Moderator)) {
        std::cout << "User has Moderator role.\n";
    }

    return 0;
}
