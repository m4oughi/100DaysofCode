#include <iostream>
#include <type_traits>

enum class Permission : unsigned char { Read = 1, Write = 2, Execute = 4 };

int main() {
    Permission p = Permission::Read;

    std::cout << "Underlying type size: " << sizeof(p) << " bytes\n";
}
