#include <iostream>

enum class Permissions : unsigned int {
    Read  = 1 << 0,  // 1
    Write = 1 << 1,  // 2
    Execute = 1 << 2 // 4
};

inline Permissions operator|(Permissions lhs, Permissions rhs) {
    return static_cast<Permissions>(
        static_cast<unsigned int>(lhs) | static_cast<unsigned int>(rhs)
    );
}

inline bool hasPermission(Permissions perm, Permissions flag) {
    return (static_cast<unsigned int>(perm) & static_cast<unsigned int>(flag)) != 0;
}

int main() {
    Permissions userPerm = Permissions::Read | Permissions::Write;
    
    if (hasPermission(userPerm, Permissions::Write)) {
        std::cout << "User has write permission\n";
    }
    return 0;
}
