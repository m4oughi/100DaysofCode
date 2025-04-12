#include <iostream>
#include <type_traits>

enum class Access : uint8_t {
    None = 0,
    Read = 1 << 0,
    Write = 1 << 1,
    Execute = 1 << 2
};

constexpr bool hasAccess(uint8_t permissions, Access perm) {
    return permissions & static_cast<uint8_t>(perm);
}

int main() {
    constexpr uint8_t perms = static_cast<uint8_t>(Access::Read) |
                              static_cast<uint8_t>(Access::Execute);

    static_assert(hasAccess(perms, Access::Execute), "Should have execute access");

    if (hasAccess(perms, Access::Read)) {
        std::cout << "Read access granted.\n";
    }
}
