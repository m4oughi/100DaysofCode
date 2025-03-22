#include <iostream>
#include <filesystem>

int main() {
    std::filesystem::path filePath = "example.txt";

    std::filesystem::permissions(filePath, std::filesystem::perms::owner_read |
                                           std::filesystem::perms::owner_write,
                                           std::filesystem::perm_options::add);

    std::cout << "Permissions updated successfully.\n";

    return 0;
}
