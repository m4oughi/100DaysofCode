#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> grantedPermissions = {"read", "write", "execute"};
    std::vector<std::string> requiredPermissions = {"read", "write"};

    if (std::includes(
            grantedPermissions.begin(), grantedPermissions.end(),
            requiredPermissions.begin(), requiredPermissions.end())) {
        std::cout << "All required permissions are granted.\n";
    } else {
        std::cout << "Some required permissions are missing.\n";
    }

    return 0;
}
