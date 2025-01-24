#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::vector<std::string> user1Permissions = {"read", "write", "execute"};
    std::vector<std::string> user2Permissions = {"write", "execute", "admin"};
    std::vector<std::string> commonPermissions;

    std::set_intersection(user1Permissions.begin(), user1Permissions.end(),
                          user2Permissions.begin(), user2Permissions.end(),
                          std::back_inserter(commonPermissions));

    std::cout << "Shared Permissions: ";
    for (const auto& perm : commonPermissions) {
        std::cout << perm << " ";
    }

    return 0;
}
