#include <iostream>

enum Permissions {
    READ    = 0b0001, // 1
    WRITE   = 0b0010, // 2
    EXECUTE = 0b0100, // 4
    DELETE  = 0b1000  // 8
};

int main() {
    int userPermissions = READ | WRITE; // Combine permissions

    std::cout << "Has Read? " << ((userPermissions & READ) ? "Yes" : "No") << std::endl;
    std::cout << "Has Write? " << ((userPermissions & WRITE) ? "Yes" : "No") << std::endl;
    std::cout << "Has Execute? " << ((userPermissions & EXECUTE) ? "Yes" : "No") << std::endl;

    return 0;
}
