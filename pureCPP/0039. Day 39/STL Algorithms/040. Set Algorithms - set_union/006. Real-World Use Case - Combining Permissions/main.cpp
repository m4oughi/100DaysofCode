#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::vector<std::string> userPermissions = {"read", "write"};
    std::vector<std::string> groupPermissions = {"write", "execute"};
    std::vector<std::string> combinedPermissions;

    std::set_union(userPermissions.begin(), userPermissions.end(),
                   groupPermissions.begin(), groupPermissions.end(),
                   std::back_inserter(combinedPermissions));

    std::cout << "Combined Permissions: ";
    for (const auto& perm : combinedPermissions) {
        std::cout << perm << " ";
    }

    return 0;
}
