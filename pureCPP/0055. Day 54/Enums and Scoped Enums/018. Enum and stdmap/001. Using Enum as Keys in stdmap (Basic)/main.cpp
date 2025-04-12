#include <iostream>
#include <map>

enum class Permission {
    None,
    Read,
    Write,
    Execute
};

int main() {
    std::map<Permission, int> permissionMap;

    // Assigning integer values to each permission
    permissionMap[Permission::Read] = 1;
    permissionMap[Permission::Write] = 2;
    permissionMap[Permission::Execute] = 3;

    // Accessing values
    std::cout << "Read permission value: " << permissionMap[Permission::Read] << "\n";
    std::cout << "Write permission value: " << permissionMap[Permission::Write] << "\n";

    return 0;
}
